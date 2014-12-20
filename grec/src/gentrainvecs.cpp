#include <ros/ros.h>
#include <tf/transform_listener.h>
#include <vector>
#include <iostream>
#include <fstream>
#include <ctype.h>
#include <cmath>

#define PI 3.14159

void generate_frequencies(unsigned int *f, double *frequencies)
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

    std::ofstream outfile("training.data");

     ros::init(argc, argv, "my_tf_listener");
   
     ros::NodeHandle node;

	float frequencies[36];//,f[8];
      int i = 0;
	unsigned int f[8];
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

 /*       listener1.lookupTransform("/left_hand" , "/left_shoulder",                           
                                     ros::Time(0), transform1);
	listener2.lookupTransform("/right_shoulder" , "/right_hip",                           
                                     ros::Time(0), transform2);
 */	listener3.lookupTransform("/right_hand" , "/right_shoulder",                           
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

		ROS_INFO("\n%f %f\n",asin(sin),acos(cos));		
		if(cos>0&&sin>0)
			f[i-10]= (asin(sin)*180/PI)/10;
		if(cos>0&&sin<0)
			f[i-10]= (360-180*acos(cos)/PI)/10;
		if(cos<0&&sin>0)
			f[i-10]= (180-asin(sin)*180/PI)/10;
		if(cos<0&&sin<0)
			f[i-10]= (180-asin(sin)*180/PI)/10;
		a=d;
		b=e;
		
		ROS_INFO("\n%u\n",f[i-10]);
		}		
	i++;
	rate.sleep();
}
	

    //generate_frequencies(f, frequencies);



	 outfile << 3 << ' ' << 8 << ' ' << 3 << "\n" ;

    for(unsigned int p = 0; p != 8; p++){
        outfile << f[p] << ' ';
    }

	 outfile << std::endl;

	  outfile << 1 << ' ' << 0 << ' ' << 0 << "\n" ;


	getchar();
i=0;

    while (node.ok()&&i<18){
        tf::StampedTransform transform1;
	tf::StampedTransform transform2;
	tf::StampedTransform transform3;

       try{
/*
        listener1.lookupTransform("/left_hand" , "/left_shoulder",                           
                                     ros::Time(0), transform1);
	listener2.lookupTransform("/right_shoulder" , "/right_hip",                           
                                     ros::Time(0), transform2);
 */	listener3.lookupTransform("/right_hand" , "/right_shoulder",                           
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
	
	else if(i==9){
		a = transform3.getOrigin().x();
		b = transform3.getOrigin().y();
		}
	else
		{
		d = transform3.getOrigin().x();
		e = transform3.getOrigin().y();
		cos= (((d-a)/(sqrt((d-a)*(d-a)+(e-b)*(e-b)))));	
		sin= (((e-b)/(sqrt((d-a)*(d-a)+(e-b)*(e-b)))));	
		ROS_INFO("\n%f  %f\n",sin,cos);		
		if(cos>0&&sin>0)
			f[i-10]= (asin(sin)*180/PI)/10;
		if(cos>0&&sin<0)
			f[i-10]= (360-180*acos(cos)/PI)/10;
		if(cos<0&&sin>0)
			f[i-10]= (180-asin(sin)*180/PI)/10;
		if(cos<0&&sin<0)
			f[i-10]= (180-asin(sin)*180/PI)/10;	
		ROS_INFO("\n%u\n",f[i-10]);
		a=d;
		b=e;	
		}		
	i++;
	rate.sleep();
}
	

    //generate_frequencies(f, frequencies);


    for(unsigned int p = 0; p != 8; p++){
        outfile << f[p] << ' ';
    }

	 outfile << std::endl;

	  outfile << 0 << ' ' <<  1 << ' ' << 0 << "\n" ;


	getchar();
i=0;

    while (node.ok()&&i<18){
        tf::StampedTransform transform1;
	tf::StampedTransform transform2;
	tf::StampedTransform transform3;

       try{

       /* listener1.lookupTransform("/left_hand" , "/left_shoulder",                           
                                     ros::Time(0), transform1);
	listener2.lookupTransform("/right_shoulder" , "/right_hip",                           
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
	
	else if(i==9){
		a = transform3.getOrigin().x();
		b = transform3.getOrigin().y();
		}
	else
		{
		d = transform3.getOrigin().x();
		e = transform3.getOrigin().y();
		cos= (((d-a)/(sqrt((d-a)*(d-a)+(e-b)*(e-b)))));
		sin= (((e-b)/(sqrt((d-a)*(d-a)+(e-b)*(e-b)))));	
		ROS_INFO("\n%f  %f\n",sin,cos);	
		if(cos>0&&sin>0)
			f[i-10]= (asin(sin)*180/PI)/10;
		if(cos>0&&sin<0)
			f[i-10]= (360-180*acos(cos)/PI)/10;
		if(cos<0&&sin>0)
			f[i-10]= (180-asin(sin)*180/PI)/10;
		if(cos<0&&sin<0)
			f[i-10]= (180-asin(sin)*180/PI)/10;
		ROS_INFO("\n%u\n",f[i-10]);
		a=d;
		b=e;	
		}		
	i++;
	rate.sleep();
}
	

    //generate_frequencies(f, frequencies);


    for(unsigned int p = 0; p != 8; p++){
        outfile << f[p] << ' ';
    }

	 outfile << std::endl;

	  outfile << 0 << ' ' << 0 << ' ' << 1 << "\n" ;

	outfile.close();

     return 0;
   }

