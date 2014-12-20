#include <ros/ros.h>
#include <ros/package.h>
#include <body_msgs/Skeletons.h>
#include <gesture/HandPos.h>
#include <gesture/gesture.h>
#include <fstream>
#include "floatfann.h"
#define PI 3.14159

gesture::gesture  msg;

int done=0;
bool flag[2]={0,0};
int i=0,j=0;
bool state=0;

struct fann *ann = fann_create_from_file("gesture_classify.net");


void chatterCallback(const gesture::HandPos::ConstPtr& msg )
{

  int parts1,extra1,k1,parts2,extra2,k2;
  int m1=0,m2=0;

  static float frame0[900][2],frame1[900][2];
  static float data1[9][2],data2[9][2];
  float a1=0,b1=0,c1=0,d1=0,e1=0,cos1=0,sin1=0,a2=0,b2=0,c2=0,d2=0,e2=0,cos2=0,sin2=0;
  fann_type f1[8],f2[8],f[16];
  float *output;

// zero indexed is left hand, one indexed is right hand

 if(!state){
	  if(msg->left_click||msg->right_click){
		
		if(msg->left_click&&!msg->right_click){
		flag[0]=1;
		  frame0[i][0]=msg->left_position.x;
		  frame0[i][1]=msg->left_position.y;
		  ROS_INFO("%d %f %f",i,frame0[i][0],frame0[i][1]);
		if(i+1!=900)
			i++;
		else{
			ROS_INFO("Buffer Full..Take lesser time to complete your gesture");		
			exit;
			}		
		}

		if(!msg->left_click&&msg->right_click){
		flag[1]=1;
		  frame1[j][0]=msg->right_position.x;
		  frame1[j][1]=msg->right_position.y;
		  ROS_INFO("%d %f %f",j,frame1[j][0],frame1[j][1]);
		if(j+1!=900)
			j++;
		else{
			ROS_INFO("Buffer Full..Take lesser time to complete your gesture");		
			exit;
			}
		}

		if(msg->left_click&&msg->right_click){
		flag[1]=1;
		flag[0]=1;
		  frame0[i][0]=msg->left_position.x;
		  frame0[i][1]=msg->left_position.y;
		  frame1[j][0]=msg->right_position.x;
		  frame1[j][1]=msg->right_position.y;
		  ROS_INFO("BOTH IN : %d %f %f %d %f %f",i,frame0[i][0],frame0[i][1],j,frame1[j][0],frame1[j][1]);
		if(i+1!=900)
			i++;
		else{
			ROS_INFO("Buffer Full..Take lesser time to complete your gesture");		
			exit;
			}
		if(j+1!=900)
			j++;
		else{
			ROS_INFO("Buffer Full..Take lesser time to complete your gesture");		
			exit;
			}
		}
		
	  }
	  if(!msg->left_click && !msg->right_click && !flag[0]&&!flag[1]) {
		  ROS_INFO("Enter the Zone %f || %f is less",msg->left_position.z,msg->right_position.z);
			i=0;
	  }
	  if(!msg->left_click && !msg->right_click && (flag[0]||flag[1])) {
	  		  ROS_INFO("Gesture Done");
	  		  state=1;
	  	  }
  }
 else {
	if(flag[0]&&!flag[1]){	 //pick for left hand
	   parts1=(i-8)/10;
	   extra1=((i-8)%10)/2;
	   k1=parts1,m1=0;			//k has to be initialized to parts for taking inner 9 seg-ends from the 10 segments v divided into. 
	   while(m1<9){
		   data1[m1][0] = frame0[k1+4+extra1][0];
		   data1[m1][1] = frame0[k1+4+extra1][1];
		   k1 += parts1;
		   m1++;
	   }
	
	   for(int l=0;l<9;l++){
		   if(l==0){
	     		a1 = data1[l][0];
	     		b1 = data1[l][1];
	   	   }
	   	   else
	     		{
	     		d1 = data1[l][0];
	     		e1 = data1[l][1];
	     		cos1= (((d1-a1)/(sqrt((d1-a1)*(d1-a1)+(e1-b1)*(e1-b1)))));
	     		sin1= (((e1-b1)/(sqrt((d1-a1)*(d1-a1)+(e1-b1)*(e1-b1)))));
	
	     		ROS_INFO(" sin:%f\tcos:%f ",sin1,cos1);
	
	     		if(cos1>0&&sin1>0)
	     			f1[l-1]=  (unsigned int) (asin(sin1)*180/PI)/10;
	     		if(cos1>0&&sin1<0)
	     			f1[l-1]=  (unsigned int) (360-180*acos(cos1)/PI)/10;
	     		if(cos1<0&&sin1>0)
	     			f1[l-1]=  (unsigned int) (180-asin(sin1)*180/PI)/10;
	     		if(cos1<0&&sin1<0)
	     			f1[l-1]=  (unsigned int) (180-asin(sin1)*180/PI)/10;
	     		a1=d1;
	     		b1=e1;
	
	     		ROS_INFO(" Angle :%f",f1[l-1]);
	     		}
	    }
	       for(unsigned int p = 0; p != 8; p++){
	          		f[p]=f1[p];
	      		}

	       for(unsigned int p = 0; p != 8; p++){
	          		f[p+8]=70;
	      		}
	}
	if(!flag[0]&&flag[1]){	 //pick for right hand
	   parts2=(j-8)/10;
	   extra2=((j-8)%10)/2;
	   k2=parts2,m2=0;
	   while(m2<9){
		   data2[m2][0] = frame1[k2+4+extra2][0];
		   data2[m2][1] = frame1[k2+4+extra2][1];
		   k2 += parts2;
		   m2++;
	   }
	
	   for(int l=0;l<9;l++){
		   if(l==0){
	     		a2 = data2[l][0];
	     		b2 = data2[l][1];
	   	   }
	   	   else
	     		{
	     		d2 = data2[l][0];
	     		e2 = data2[l][1];
	     		cos2= (((d2-a2)/(sqrt((d2-a2)*(d2-a2)+(e2-b2)*(e2-b2)))));
	     		sin2= (((e2-b2)/(sqrt((d2-a2)*(d2-a2)+(e2-b2)*(e2-b2)))));
	
	     		ROS_INFO(" sin:%f\tcos:%f ",sin2,cos2);
	
	     		if(cos2>0&&sin2>0)
	     			f2[l-1]=  (unsigned int) (asin(sin2)*180/PI)/10;
	     		if(cos2>0&&sin2<0)
	     			f2[l-1]=  (unsigned int) (360-180*acos(cos2)/PI)/10;
	     		if(cos2<0&&sin2>0)
	     			f2[l-1]=  (unsigned int) (180-asin(sin2)*180/PI)/10;
	     		if(cos2<0&&sin2<0)
	     			f2[l-1]=  (unsigned int) (180-asin(sin2)*180/PI)/10;
	     		a2=d2;
	     		b2=e2;
	
	     		ROS_INFO(" Angle :%f",f2[l-1]);
	     		}
	    }
		 for(unsigned int p = 0; p != 8; p++){
	          		f[p]=70;
	      		}

	       for(unsigned int p = 0; p != 8; p++){
	          		f[p+8]=f2[p];
	      		}
	}
	if(flag[0]&&flag[1]){	 //pick for left hand and right hand
	   parts1=(i-8)/10;
	   extra1=((i-8)%10)/2;
	   k1=0,m1=0;
	   parts2=(j-8)/10;
	   extra2=((j-8)%10)/2;
	   k2=0,m2=0;
	   while(m1<9){
		   data1[m1][0] = frame0[k1+4+extra1][0];
		   data1[m1][1] = frame0[k1+4+extra1][1];
		   k1 += parts1;
		   m1++;
	   }
	 while(m2<9){
		   data2[m2][0] = frame1[k2+4+extra2][0];
		   data2[m2][1] = frame1[k2+4+extra2][1];
		   k2 += parts2;
		   m2++;
	   }
	   for(int l=0;l<9;l++){
		   if(l==0){
	     		a1 = data1[l][0];
	     		b1 = data1[l][1];
	   	   }
	   	   else
	     		{
	     		d1 = data1[l][0];
	     		e1 = data1[l][1];
	     		cos1= (((d1-a1)/(sqrt((d1-a1)*(d1-a1)+(e1-b1)*(e1-b1)))));
	     		sin1= (((e1-b1)/(sqrt((d1-a1)*(d1-a1)+(e1-b1)*(e1-b1)))));
	
	     		ROS_INFO(" sin:%f\tcos:%f ",sin1,cos1);
	
	     		if(cos1>0&&sin1>0)
	     			f1[l-1]=  (unsigned int) (asin(sin1)*180/PI)/10;
	     		if(cos1>0&&sin1<0)
	     			f1[l-1]=  (unsigned int) (360-180*acos(cos1)/PI)/10;
	     		if(cos1<0&&sin1>0)
	     			f1[l-1]=  (unsigned int) (180-asin(sin1)*180/PI)/10;
	     		if(cos1<0&&sin1<0)
	     			f1[l-1]=  (unsigned int) (180-asin(sin1)*180/PI)/10;
	     		a1=d1;
	     		b1=e1;
	
	     		ROS_INFO(" Angle :%f",f1[l-1]);
	     		}
	    }
	for(int l=0;l<9;l++){
		   if(l==0){
	     		a2 = data2[l][0];
	     		b2 = data2[l][1];
	   	   }
	   	   else
	     		{
	     		d2 = data2[l][0];
	     		e2 = data2[l][1];
	     		cos2= (((d2-a2)/(sqrt((d2-a2)*(d2-a2)+(e2-b2)*(e2-b2)))));
	     		sin2= (((e2-b2)/(sqrt((d2-a2)*(d2-a2)+(e2-b2)*(e2-b2)))));
	
	     		ROS_INFO(" sin:%f\tcos:%f ",sin2,cos2);
	
	     		if(cos2>0&&sin2>0)
	     			f2[l-1]=  (unsigned int) (asin(sin2)*180/PI)/10;
	     		if(cos2>0&&sin2<0)
	     			f2[l-1]=  (unsigned int) (360-180*acos(cos2)/PI)/10;
	     		if(cos2<0&&sin2>0)
	     			f2[l-1]=  (unsigned int) (180-asin(sin2)*180/PI)/10;
	     		if(cos2<0&&sin2<0)
	     			f2[l-1]=  (unsigned int) (180-asin(sin2)*180/PI)/10;
	     		a2=d2;
	     		b2=e2;
	
	     		ROS_INFO(" Angle :%f",f2[l-1]);
	     		}
	    }
       		 for(unsigned int p = 0; p != 8; p++){
	          		f[p]=f1[p];
	      		}

	       for(unsigned int p = 0; p != 8; p++){
	          		f[p+8]=f2[p];
	      		}

	}

	for(unsigned int p = 0; p != 16; p++){
	          	ROS_INFO("%f angles given",f[p]);
	      		}

	output = fann_run(ann, f);
	/*	std::cout << "Gesture 1 : " << output[0] << std::endl;
		std::cout << "Gesture 2 : " << output[1] << std::endl;
		std::cout << "Gesture 3 : " << output[2] << std::endl;	
*/
	if(output[0]>0.7)
		::msg.gesture0 = 1;
	if(output[1]>0.7)
		::msg.gesture1 = 1;
	if(output[2]>0.7)
		::msg.gesture2 = 1;
	if(output[3]>0.7)
		::msg.gesture3 = 1;
	if(output[4]>0.7)
		::msg.gesture4 = 1;
	if(output[5]>0.7)
		::msg.gesture5 = 1;
	if(output[6]>0.7)
		::msg.gesture6 = 1;
	if(output[7]>0.7)
		::msg.gesture7 = 1;
	if(output[8]>0.7)
		::msg.gesture8 = 1;
	if(output[9]>0.7)
		::msg.gesture9 = 1;
	if(output[10]>0.7)
		::msg.gesture10 = 1;
	if(output[11]>0.7)
		::msg.gesture11 = 1;
	if(output[12]>0.7)
		::msg.gesture12 = 1;
	if(output[13]>0.7)
		::msg.gesture13 = 1;
	if(output[14]>0.7)
		::msg.gesture14 = 1;
	if(output[15]>0.7)
		::msg.gesture15 = 1;
	if(output[16]>0.7)
		::msg.gesture16 = 1;
	if(output[17]>0.7)
		::msg.gesture17 = 1;
	if(output[18]>0.7)
		::msg.gesture18 = 1;
	if(output[19]>0.7)
		::msg.gesture19 = 1;

	done=1;

	 }

}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "listener2");

  ros::NodeHandle n;

  ros::Publisher chatter_pub = n.advertise<gesture::gesture>("chatter", 1);
   
  ros::Subscriber sub = n.subscribe("/hand_position", 1, chatterCallback);

 ros::Rate looprate(30);
while(1){
  while(!done)
  {
	ros::spinOnce();
	looprate.sleep();
  }

	chatter_pub.publish(msg);

	int x=1;
	//ROS_INFO("Exit ? (0.yes	1.no): ");
	//scanf("%d",&x);
	if(!x)
		break;
	else {
		msg.gesture0 =0;
		msg.gesture1 =0;
		msg.gesture2 =0;
		msg.gesture3 =0;
		msg.gesture4 =0;
		msg.gesture5 =0;
		msg.gesture6 =0;
		msg.gesture7 =0;
		msg.gesture8 =0;
		msg.gesture9 =0;
		msg.gesture10 =0;
		msg.gesture11 =0;
		msg.gesture12 =0;
		msg.gesture13 =0;
		msg.gesture14 =0;
		msg.gesture15 =0;
		msg.gesture16 =0;
		msg.gesture17 =0;
		msg.gesture18 =0;
		msg.gesture19 =0;
		
		done=0;
		flag[0]=0;
		flag[1]=0;
		state=0;
		i=0;
		j=0;
	}
	}
  return 0;
}
