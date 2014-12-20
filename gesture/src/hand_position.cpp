#include <ros/ros.h>
#include <ros/package.h>
#include <body_msgs/Skeletons.h>
#include <gesture/HandPos.h>
body_msgs::Skeletons skel;

gesture::HandPos my_handpos;

void check_click(geometry_msgs::Point reference)
{
	if(my_handpos.left_position.z < (reference.z - 0.42))
		my_handpos.left_click = 1;
	else
		my_handpos.left_click = 0;

	if(my_handpos.right_position.z < (reference.z - 0.42))
		my_handpos.right_click = 1;
	else
		my_handpos.right_click = 0;

}
void skeletonCallback(const body_msgs::SkeletonsConstPtr& msg)
{
skel = *msg;
geometry_msgs::Point ref_point;
my_handpos.left_position = skel.skeletons[0].left_hand.position;
my_handpos.right_position = skel.skeletons[0].right_hand.position;
ref_point = skel.skeletons[0].head.position;
check_click(ref_point);
}

int main(int argc, char **argv)
{
   ros::init(argc, argv, "gesture");
   ros::NodeHandle n;



   ros::Subscriber skeletal_sub = n.subscribe("/skeletons",1,skeletonCallback);
   ros::Publisher handpos_pub = n.advertise<gesture::HandPos>("/hand_position",1);

   ros::Rate loop_rate(30);


   while(n.ok())
   {

	   handpos_pub.publish(my_handpos);
//	   ROS_INFO("Left : %f %f %f | Right %f %f %f | %d %d", my_handpos.left_position.x,my_handpos.left_position.y,my_handpos.left_position.z,
//			   my_handpos.right_position.x,my_handpos.right_position.y,my_handpos.right_position.z, my_handpos.left_click, my_handpos.right_click);




	   ros::spinOnce();
	   loop_rate.sleep();
   }

   return 0;

}
