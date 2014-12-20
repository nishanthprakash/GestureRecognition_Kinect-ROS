#include <ros/ros.h>
#include <tf/transform_listener.h>
#include <vector>
#include <iostream>
#include <ctype.h>
#include <math.h>
#include "floatfann.h"
#define PI 3.14159


void generate_frequencies(unsigned int *f, fann_type *frequencies)
{
 
    std::vector<unsigned int> block_count(36, 0);
    double num_blocks = 8;

	int i = 0;

while(i < 8){	        
            block_count[(f[i])]++;
      		i++;  
    }

	
  for(unsigned int j = 0; j<36; j++){
        frequencies[j] = block_count[j]/num_blocks;
    }
}
   
int main(int argc, char** argv){


     ros::init(argc, argv, "my_tf_listener");
   
     ros::NodeHandle node;

	
	struct fann *ann = fann_create_from_file("gesture_classify.net");
	float *output;

	 //fann_type frequencies[36];
      int i = 0;
	fann_type f[8];
	float a=0,b=0,c=0,d=0,e=0,cos=0,sin=0;

        tf::TransformListener listener1;
	tf::TransformListener listener2;
	tf::TransformListener listener3;
	   
     ros::Rate rate(9);
	
    while (node.ok()&&i<18){
        tf::StampedTransform transform1;
	tf::StampedTransform transform2;
	tf::StampedTransform transform3;

       try{

   /*     listener1.lookupTransform("/left_hand" , "/left_shoulder",                           
                                     ros::Time(0), transform1);
	listener2.lookupTransform("/right_hip" , "/right_shoulder",                           
                                     ros::Time(0), transform2);
 	*/listener3.lookupTransform("/right_hand" , "/right_shoulder",                           
                                     ros::Time(0), transform3);
       }
       catch (tf::TransformException ex){
         ROS_ERROR("%s",ex.what());
       }



	if(i<9){
		i++;
		rate.sleep();
		continue;
		}
	
	if(i==9){
		a = transform3.getOrigin().x();
		b = transform3.getOrigin().y();
		}
	else
		{
		d = transform3.getOrigin().x();
		e = transform3.getOrigin().y();
		cos= (((d-a)/(sqrt((d-a)*(d-a)+(e-b)*(e-b)))));
		sin= (((e-b)/(sqrt((d-a)*(d-a)+(e-b)*(e-b)))));		
		if(cos>0&&sin>0)
			f[i-10]= (unsigned int) (asin(sin)*180/PI)/10;
		if(cos>0&&sin<0)
			f[i-10]= (unsigned int) (360-180*acos(cos)/PI)/10;
		if(cos<0&&sin>0)
			f[i-10]= (unsigned int) (180-asin(sin)*180/PI)/10;
		if(cos<0&&sin<0)
			f[i-10]= (unsigned int) (180-asin(sin)*180/PI)/10;
		ROS_INFO("\n%u\n",f[i-10]);
		a=d;
		b=e;
		}		
	i++;
	rate.sleep();
	}

    	//generate_frequencies(f , frequencies);

	output = fann_run(ann, f);

		std::cout << "Gesture 1 : " << output[0] << std::endl;
		std::cout << "Gesture 2 : " << output[1] << std::endl;
		std::cout << "Gesture 3 : " << output[2] << std::endl;	
     return 0;
   }

