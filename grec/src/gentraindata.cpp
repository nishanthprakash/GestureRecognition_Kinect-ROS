   #include <ros/ros.h>
   #include <tf/transform_listener.h>

#include <vector>
#include <iostream>
#include <fstream>
#include <ctype.h>
#include <cmath>



void generate_frequencies(unsigned int freq[][2], double *frequencies)
{
 
    std::vector<unsigned int> block_count(512, 0);
    double num_blocks = 80.0;

	int i = 0;

    while(i < 40){	        
            block_count[(freq[i][0])]++;
      		i++;  
    }

	i=0;

	while(i < 40){	        
            block_count[(freq[i][1]+256)]++;
      		i++;  
    }
	
  for(unsigned int j = 0; j !=512; j++){
        frequencies[j] = block_count[j]/num_blocks;
    }
}
 
   
   int main(int argc, char** argv){

    std::ofstream outfile("training.data");

     ros::init(argc, argv, "my_tf_listener");
   
     ros::NodeHandle node;

	double frequencies[512];
	float armlength=1.0, armunits=0.25,clearence =0.0;
      int i = 0;
	unsigned int freq[40][2];
	unsigned int a=0,b=0,c=0;

        tf::TransformListener listener1;
	tf::TransformListener listener2;
	tf::TransformListener listener3;
	   
     ros::Rate rate(8);
	
	
    while (node.ok()&&(i<49)){
        tf::StampedTransform transform1;
	tf::StampedTransform transform2;
	tf::StampedTransform transform3;

       try{

        listener1.lookupTransform("/left_hand" , "/left_shoulder",                           
                                     ros::Time(0), transform1);
	listener2.lookupTransform("/right_shoulder" , "/right_hip",                           
                                     ros::Time(0), transform2);
 	listener3.lookupTransform("/right_hand" , "/right_shoulder",                           
                                     ros::Time(0), transform3);
       }
       catch (tf::TransformException ex){
         ROS_ERROR("%s",ex.what());
       }


	if(i<9){
		i++;
		armlength = sqrt(transform2.getOrigin().x()*transform2.getOrigin().x()+transform2.getOrigin().y()*transform2.getOrigin().y()+transform2.getOrigin().z()*transform2.getOrigin().z());
		clearence = armlength/4.0 ;
		armunits = armlength/4.0 ;		
		rate.sleep();
		continue;
		}
	
		a = (int) ((transform3.getOrigin().x()+armlength)/armunits);
		b = (int) ((transform3.getOrigin().y()+armlength)/armunits);
		c = (int) (transform3.getOrigin().z()/armunits);
		freq[i-9][0] = a + b*8 + c*8*8;
		 std::cerr << (i-9) << ' '<<a<< ' '<<b<< ' '<<c<< ' '<<freq[i-9][0]<< "\n" ;


		a = (int) (-1)*((transform1.getOrigin().x()+armlength)/armunits);
		b = (int) ((transform1.getOrigin().y()+armlength)/armunits);
		c = (int) (transform1.getOrigin().z()/armunits);
		freq[i-9][1] = a + b*8 + c*8*8;
		 std::cerr << (i-9) << ' '<<a<< ' '<<b<< ' '<<c<< ' '<<freq[i-9][1]<< "\n" ;
		i++;


	       rate.sleep();
	     }
	

    generate_frequencies(freq , frequencies);



	 outfile << 3 << ' ' << 512 << ' ' << 3 << "\n" ;

    for(unsigned int p = 0; p != 512; p++){
        outfile << frequencies[p] << ' ';
    }

	 outfile << std::endl;

	  outfile << 1 << ' ' << 0 << ' ' << 0 << "\n" ;


	getchar();
i=0;

while (node.ok()&&(i<49)){
        tf::StampedTransform transform1;
	tf::StampedTransform transform2;
	tf::StampedTransform transform3;

       try{

        listener1.lookupTransform("/left_hand" , "/left_shoulder",                           
                                     ros::Time(0), transform1);
	listener2.lookupTransform("/right_shoulder" , "/right_hip",                           
                                     ros::Time(0), transform2);
 	listener3.lookupTransform("/right_hand" , "/right_shoulder",                           
                                     ros::Time(0), transform3);
       }
       catch (tf::TransformException ex){
         ROS_ERROR("%s",ex.what());
       }


	if(i<9){
		i++;
		armlength = sqrt(transform2.getOrigin().x()*transform2.getOrigin().x()+transform2.getOrigin().y()*transform2.getOrigin().y()+transform2.getOrigin().z()*transform2.getOrigin().z());
		clearence = armlength/4.0 ;
		armunits = armlength/4.0 ;		
		rate.sleep();
		continue;
		}
	a = (int) ((transform3.getOrigin().x()+armlength)/armunits);
		b = (int) ((transform3.getOrigin().y()+armlength)/armunits);
		c = (int) (transform3.getOrigin().z()/armunits);
		freq[i-9][0] = a + b*8 + c*8*8;
		 std::cerr << (i-9) << ' '<<a<< ' '<<b<< ' '<<c<< ' '<<freq[i-9][0]<< "\n" ;


		a = (int) (-1)*((transform1.getOrigin().x()+armlength)/armunits);
		b = (int) ((transform1.getOrigin().y()+armlength)/armunits);
		c = (int) (transform1.getOrigin().z()/armunits);
		freq[i-9][1] = a + b*8 + c*8*8;
		 std::cerr << (i-9) << ' '<<a<< ' '<<b<< ' '<<c<< ' '<<freq[i-9][1]<< "\n" ;
	i++;


       rate.sleep();
     }
       generate_frequencies(freq , frequencies);

for(unsigned int p = 0; p != 512; p++){
        outfile << frequencies[p] << ' ';
    }

	outfile << std::endl;

	  outfile << 0 << ' ' << 1 << ' ' << 0 << "\n" ;



	getchar();
i=0;

while (node.ok()&&(i<49)){
        tf::StampedTransform transform1;
	tf::StampedTransform transform2;
	tf::StampedTransform transform3;

       try{

        listener1.lookupTransform("/left_hand" , "/left_shoulder",                           
                                     ros::Time(0), transform1);
	listener2.lookupTransform("/right_shoulder" , "/right_hip",                           
                                     ros::Time(0), transform2);
 	listener3.lookupTransform("/right_hand" , "/right_shoulder",                           
                                     ros::Time(0), transform3);
       }
       catch (tf::TransformException ex){
         ROS_ERROR("%s",ex.what());
       }


	if(i<9){
		i++;
		armlength = sqrt(transform2.getOrigin().x()*transform2.getOrigin().x()+transform2.getOrigin().y()*transform2.getOrigin().y()+transform2.getOrigin().z()*transform2.getOrigin().z());
		clearence = armlength/4.0 ;
		armunits = armlength/4.0 ;		
		rate.sleep();
		continue;
		}

		a = (int) ((transform3.getOrigin().x()+armlength)/armunits);
		b = (int) ((transform3.getOrigin().y()+armlength)/armunits);
		c = (int) (transform3.getOrigin().z()/armunits);
		freq[i-9][0] = a + b*8 + c*8*8;
		 std::cerr << (i-9) << ' '<<a<< ' '<<b<< ' '<<c<< ' '<<freq[i-9][0]<< "\n" ;


		a = (int) (-1)*((transform1.getOrigin().x()+armlength)/armunits);
		b = (int) ((transform1.getOrigin().y()+armlength)/armunits);
		c = (int) (transform1.getOrigin().z()/armunits);
		freq[i-9][1] = a + b*8 + c*8*8;
		 std::cerr << (i-9) << ' '<<a<< ' '<<b<< ' '<<c<< ' '<<freq[i-9][1]<< "\n" ;

	i++;


       rate.sleep();
     }
       generate_frequencies(freq , frequencies);

for(unsigned int p = 0; p != 512; p++){
        outfile << frequencies[p] << ' ';
    }

	 outfile << std::endl;

	  outfile << 0 << ' ' << 0<< ' ' << 1 << "\n" ;

	outfile.close();

     return 0;
   };

