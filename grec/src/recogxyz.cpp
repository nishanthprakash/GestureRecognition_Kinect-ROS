#include <ros/ros.h>
#include <tf/transform_listener.h>
#include <vector>
#include <iostream>
#include <ctype.h>
#include <math.h>
#include "floatfann.h"



void generate_frequencies(unsigned int freq[][2][3], fann_type *frequencies)
{
 
    std::vector<unsigned int> block_count(72, 0);
    double num_blocks = 80.0;

	int i = 0;

while(i < 40){	        
            block_count[(freq[i][0][0])]++;
      		i++;  
    }

	i=0;
 while(i < 40){	        
            block_count[(freq[i][0][1]+12)]++;
      		i++;  
    }

	i=0;
 while(i < 40){	        
            block_count[(freq[i][0][2]+24)]++;
      		i++;  
    }

	i=0;
 while(i < 40){	        
            block_count[(freq[i][1][0]+36)]++;
      		i++;  
    }

	i=0;
 while(i < 40){	        
            block_count[(freq[i][1][1]+48)]++;
      		i++;  
    }

	i=0;

while(i < 40){	        
            block_count[(freq[i][1][2]+60)]++;
      		i++;  
    }
	
  for(unsigned int j = 0; j !=72; j++){
        frequencies[j] = block_count[j]/num_blocks;
    }
}
 
   
int main(int argc, char** argv){

  
     ros::init(argc, argv, "my_tf_listener");
   
     ros::NodeHandle node;

	struct fann *ann = fann_create_from_file("gesture_classify.net");
	float *output;
	fann_type frequencies[72];
	float armlength=1.0, armunits=0.25,clearence=0.25,dist1,dist2;
      int i = 0;
	unsigned int freq[40][2][3];
	unsigned int a=0,b=0,c=0;

        tf::TransformListener listener1;
	tf::TransformListener listener2;
	tf::TransformListener listener3;
	   
     ros::Rate rate(40);
	
	
    while (node.ok()){
        tf::StampedTransform transform1;
	tf::StampedTransform transform2;
	tf::StampedTransform transform3;

       try{

        listener1.lookupTransform("/left_hand" , "/left_shoulder",                           
                                     ros::Time(0), transform1);
	listener2.lookupTransform("/right_hip" , "/right_shoulder",                           
                                     ros::Time(0), transform2);
 	listener3.lookupTransform("/right_hand" , "/right_shoulder",                           
                                     ros::Time(0), transform3);
       }
       catch (tf::TransformException ex){
         ROS_ERROR("%s",ex.what());
       }



	//all measurements wrt shoulder-hip length
	//if right hand to shoulder tf is less than hip to shoulder tf and not in clearence distance then start tracking for 2.5 seconds---best imple=palm open-close 
	//one fourth from shoulder is the centre of sphere whose hemisphere v use as boundary, radius = shoulder to hip.


	if(i<9){
		i++;
		/*armlength = sqrt(transform2.getOrigin().x()*transform2.getOrigin().x()+transform2.getOrigin().y()*transform2.getOrigin().y()+transform2.getOrigin().z()*transform2.getOrigin().z());
		clearence = armlength/4.0 ;
		armunits = armlength/4.0 ;*/
		armlength = 0.55;
		clearence = 0.2;
		armunits = 0.1 ;		
		rate.sleep();
		continue;
		}
/*

		dist1 = sqrt(transform3.getOrigin().x()*transform3.getOrigin().x()+transform3.getOrigin().y()*transform3.getOrigin().y()+transform3.getOrigin().z()*transform3.getOrigin().z());

		dist2 = sqrt(transform1.getOrigin().x()*transform1.getOrigin().x()+transform1.getOrigin().y()*transform1.getOrigin().y()+transform1.getOrigin().z()*transform1.getOrigin().z());
*/

	if(/*(dist1<armlength || dist2<armlength)&&*/ (transform3.getOrigin().z()>(clearence) || transform1.getOrigin().z()>(clearence))){
		a = (int) ((transform3.getOrigin().x()+armlength)/armunits);
		b = (int) ((transform3.getOrigin().y()+armlength)/armunits);
		c = (int) (transform3.getOrigin().z()/armunits);
		//freq[i-9][0] = a + b*8 + c*8*8;
		 std::cerr << (i-9) << ' '<<a<< ' '<<b<< ' '<<c << '\n';   //<< ' '<<freq[i-9][0]<< "\n" ;
		freq[i-9][0][0] = a;
		freq[i-9][0][1] = b;
		freq[i-9][0][2] = c;
		

		a = (int) ((transform1.getOrigin().x()+armlength)/armunits);
		b = (int) ((transform1.getOrigin().y()+armlength)/armunits);
		c = (int) (transform1.getOrigin().z()/armunits);
		//freq[i-9][1] = a + b*8 + c*8*8;
		freq[i-9][1][0] = a;
		freq[i-9][1][1] = b;
		freq[i-9][1][2] = c;
		std::cerr << (i-9) << ' '<<a<< ' '<<b<< ' '<<c << '\n'; //<< ' '<<freq[i-9][1]<< "\n" ;
		i++;



		if(i<49){
		rate.sleep();
		continue;
		}

	
}

	if(/*!((dist1<(armlength-0.1) || dist2<(armlength-0.1))&&*/ ((transform3.getOrigin().z()<(clearence))&&(transform1.getOrigin().z()<(clearence))) && i<49){
		printf("\nSorry lost your gesture try again !!\n");
		i=0;
		rate.sleep();
		continue;
		}
	


    	generate_frequencies(freq , frequencies);

	output = fann_run(ann, frequencies);

	printf("\nProducing results.......................................\n");		

	//if(output[0]>0.0)
		std::cout << "Gesture 1 : " << output[0] << std::endl;

	//if(output[1]>0.0)
		std::cout << "Gesture 2 : " << output[1] << std::endl;
	
	//if(output[2]>0.0)
		std::cout << "Gesture 3 : " << output[2] << std::endl;

	//if(output[0]<0.5&&output[1]<0.5&&output[2]<0.5)
					

	i=0;
	//output = NULL;
		printf("\n please repeat the gesture \n");

	continue;
	    //rate.sleep();
	}
	
     return 0;
   }

