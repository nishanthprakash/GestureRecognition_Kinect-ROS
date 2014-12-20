#include <ros/ros.h>
#include <ros/package.h>
#include <body_msgs/Skeletons.h>
#include <gesture/HandPos.h>
#include <gesture/gesture.h>
#include <fstream>
#include "floatfann.h"
#define PI 3.14159
char str[] ="training.data";
int done=0;
void chatterCallback(const gesture::HandPos::ConstPtr& msg )
{
  static bool flag[2];
  static int i,j;
  static bool state[2];
  int parts,extra,k;
  int m=0;

  static float frame0[900][2],frame1[2];
  static float data[9][2];
  float a=0,b=0,c=0,d=0,e=0,cos=0,sin=0;
  fann_type f[8];
  float *output;

// zero indexed is left hand, one indexed is right hand

 std::ofstream outfile(str);

 if(!state[0]){
	  if(msg->left_click){
		flag[0]=1;
		  frame0[i][0]=msg->left_position.x;
		  frame0[i][1]=msg->left_position.y;
		  ROS_INFO("%d %f %f",i,frame0[i][0],frame0[i][1]);
		if(i+1!=900)
			i++;
		else
			ROS_INFO("Buffer Full..Take lesser time to complete your gesture");
	  }
	  if(!msg->left_click && !flag[0]) {
		  ROS_INFO("Enter the Zone %f || %d is less %d",msg->left_position.z,msg->left_click,i);
			i=0;
	  }
	  if(!msg->left_click && flag[0]) {
	  		  ROS_INFO("Gesture Done");
	  		  state[0]=1;
	  	  }
  }
 else {
	 //pick for left hand
   parts=(i-8)/10;
   extra=((i-8)%10)/2;
   k=0,m=0;
   while(m<9){
	   data[m][0] = frame0[k+4+extra][0];
	   data[m][1] = frame0[k+4+extra][1];
	   k += parts;
	   m++;
   }

   for(int l=0;l<9;l++){
	   if(l==0){
     		a = data[l][0];
     		b = data[l][1];
   	   }
   	   else
     		{
     		d = data[l][0];
     		e = data[l][1];
     		cos= (((d-a)/(sqrt((d-a)*(d-a)+(e-b)*(e-b)))));
     		sin= (((e-b)/(sqrt((d-a)*(d-a)+(e-b)*(e-b)))));

     		ROS_INFO(" sin:%f\tcos:%f ",sin,cos);

     		if(cos>0&&sin>0)
     			f[l-1]=  (unsigned int) (asin(sin)*180/PI)/10;
     		if(cos>0&&sin<0)
     			f[l-1]=  (unsigned int) (360-180*acos(cos)/PI)/10;
     		if(cos<0&&sin>0)
     			f[l-1]=  (unsigned int) (180-asin(sin)*180/PI)/10;
     		if(cos<0&&sin<0)
     			f[l-1]=  (unsigned int) (180-asin(sin)*180/PI)/10;
     		a=d;
     		b=e;

     		ROS_INFO(" Angle :%f",f[l-1]);
     		}
    }
   outfile << 1 << ' ' << 8 << ' ' << 3 << "\n" ;
	ROS_INFO("Writing to file...please wait");
      for(unsigned int p = 0; p != 8; p++){
          outfile << f[p] << ' ';
      }

  	 outfile << std::endl;
  	ROS_INFO("The Index of the Type of Gesture : ");
  	 int n;
	scanf("%d",&n);
  	 switch(n){
  	 case 1 :  outfile << 1 << ' ' << 0 << ' ' << 0 << "\n" ;
  	 	 	 done=1;
			exit;
			break;
  	 case 2 :  outfile << 0 << ' ' << 1 << ' ' << 0 << "\n" ;
			done=1;
			exit;  	 	 	
			 break;
  	 case 3 :  outfile << 0 << ' ' << 0 << ' ' << 1 << "\n" ;
  	 	 	 done=1;
			exit;
			break;
  	 default : ROS_INFO("Wrong Value ");

  	 }

  	 //return;
  	 /*ROS_INFO("Another gesture ? Press 'y' or 'n' : ");
  	 char check = getchar();
  	 if(check=='y'){
  		 ROS_INFO("Give a filename");

  	 }
  	 else
  		 exit ;*/
 }


 /*if(!state[1]){

 	  if(msg->right_click && !flag[1]){
 		  flag[1]=1;
 	  }

 	  if(msg->right_click && flag[1]){
 		  flag[1]=0;
 		  state=1;
       }

 	  if(flag[1]){
 		  frame1[j][0]=msg->right_position.x;
 		  frame1[j][1]=msg->right_position.y;
 		  j++;
 	  }
   }
 else{
	 //pick for right hand
	 parts=(i-8)/10;
	   extra=((i-8)%10)/2;
	   k=0;
	   while(k<9){
		   data[k][0] = frame0[k+4+extra][0]
		   data[k][1] = frame0[k+4+extra][1]
		   k += parts;
	   }

	   for(int l=0;l<9;l++){
		   if(l==0){
	     		a = data[l][0];
	     		b = data[l][1];
	   	   }
	   	   else
	     		{
	     		d = data[l][0];
	     		e = data[l][1];
	     		cos= (((d-a)/(sqrt((d-a)*(d-a)+(e-b)*(e-b)))));
	     		sin= (((e-b)/(sqrt((d-a)*(d-a)+(e-b)*(e-b)))));

	     		ROS_INFO("\n%f %f\n",asin(sin),acos(cos));

	     		if(cos>0&&sin>0)
     			f[l-1]=  (unsigned int) (asin(sin)*180/PI)/10;
     		if(cos>0&&sin<0)
     			f[l-1]=  (unsigned int) (360-180*acos(cos)/PI)/10;
     		if(cos<0&&sin>0)
     			f[l-1]=  (unsigned int) (180-asin(sin)*180/PI)/10;
     		if(cos<0&&sin<0)
     			f[l-1]=  (unsigned int) (180-asin(sin)*180/PI)/10;
     		a=d;
     		b=e;

     		ROS_INFO("\n%u\n",f[l-1]);
	     		}
	    }
	   //output = fann_run(ann, f);

	   		std::cout << "Gesture 1 : " << output[0] << std::endl;
	   		std::cout << "Gesture 2 : " << output[1] << std::endl;
	   		std::cout << "Gesture 3 : " << output[2] << std::endl;
 }*/

}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<gesture::gesture>("chatter", 1);
   
  ros::Subscriber sub = n.subscribe("/hand_position", 1, chatterCallback);

/*
    
     int count = 0;
     while (ros::ok())
     {
       

   gesture::gesture  msg;
   msg.gesture1 = 1;
       
      chatter_pub.publish(msg);
  
      ros::spinOnce();
  
      loop_rate.sleep();
      ++count;
    }*/
  if(!done)
	ros::spin();

  return 0;
}
