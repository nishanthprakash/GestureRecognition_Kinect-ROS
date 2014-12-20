#include <ros/ros.h>
#include <ros/package.h>
#include <body_msgs/Skeletons.h>
#include <gesture/HandPos.h>
gesture::HandPos my_handpos;

void handCallback(const gesture::HandPosConstPtr& msg)
{
my_handpos = *msg;
}

int main(int argc, char **argv)
{
   ros::init(argc, argv, "gesture_trainer");
   ros::NodeHandle n;

   FILE *writer;





   ros::Subscriber handpos_sub = n.subscribe("/hand_position",1,handCallback);
   ros::Publisher handpos_pub = n.advertise<gesture::HandPos>("/handpos",1);

   ros::Rate loop_rate(30);

   gesture::HandPos handpos_old;

   bool gesture_active = 0;
   int state = 0;
   while(n.ok())
   {

	   handpos_pub.publish(my_handpos);
//	   ROS_INFO("Left : %f %f %f | Right %f %f %f | %d %d", my_handpos.left_position.x,my_handpos.left_position.y,my_handpos.left_position.z,
//			   my_handpos.right_position.x,my_handpos.right_position.y,my_handpos.right_position.z, my_handpos.left_click, my_handpos.right_click);

	   float lx,ly,lz,rx,ry,rz;
	   lx = (my_handpos.left_position.x - handpos_old.left_position.x)*100;
	   ly = (my_handpos.left_position.y - handpos_old.left_position.y)*100;
	   lz = (my_handpos.left_position.z - handpos_old.left_position.z)*100;
	   rx = (my_handpos.right_position.x - handpos_old.right_position.x)*100;
	   ry = (my_handpos.right_position.y - handpos_old.right_position.y)*100;
	   rz = (my_handpos.right_position.z - handpos_old.right_position.z)*100;



	   if(lx > 1.0) lx = 1.0;
		   else if(lx < -1.0) lx = -1.0;
		   else lx = 0.0;

	   if(ly > 1.0) ly = 1.0;
	   	   else if(ly < -1.0) ly = -1.0;
	   	   else ly = 0.0;

	   if(lz > 1.0) lz = 1.0;
	   	   else if(lz < -1.0) lz = -1.0;
	   	   else lz = 0.0;

	   if(rx > 1.0) rx = 1.0;
	   	   else if(rx < -1.0) rx = -1.0;
	   	   else rx = 0.0;

	   if(ry > 1.0) ry = 1.0;
	   	   else if(ry < -1.0) ry = -1.0;
	   	   else ry = 0.0;

	   if(rz > 1.0) rz = 1.0;
	   	   else if(rz < -1.0) rz = -1.0;
	   	   else rz = 0.0;


	   switch(state)
	   {
	   case 0 : if(my_handpos.right_click == 1 || my_handpos.left_click == 1)
				state = 1;
			    break;

	   case 1 : if(my_handpos.right_click == 1 && my_handpos.left_click == 1)
			    {
				    std::string gesture_file = ros::package::getPath("gesture") + "/gesture.txt";
		   		    writer=fopen(gesture_file.c_str(),"a+");
		   	        fprintf(writer,"%.1f %.1f %.1f %.1f %.21 %.21\n",lx,ly,lz,rx,ry,rz);
		   	        fclose (writer);
			    }
			    else if(my_handpos.right_click == 1)
			    {
			    	std::string gesture_file = ros::package::getPath("gesture") + "/gesture.txt";
			    	writer=fopen(gesture_file.c_str(),"a+");
			    	fprintf(writer,"0.0 0.0 0.0 %.1f %.1f %.1f\n", rx,ry,rz);
			    	fclose (writer);
			    }
			    else if(my_handpos.left_click == 1)
			    {
			    	std::string gesture_file = ros::package::getPath("gesture") + "/gesture.txt";
			    	writer=fopen(gesture_file.c_str(),"a+");
			    	fprintf(writer,"%.1f %.1f %.1f 0.0 0.0 0.0\n", lx,ly,lz);
			    	fclose (writer);
			    }
			    else
			    	state = 2;
			    break;
	




	   }



	   handpos_old = my_handpos;
	   ros::spinOnce();
	   loop_rate.sleep();

   }


   return 0;

}
