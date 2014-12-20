   #include <ros/ros.h>
   #include <tf/transform_listener.h>
 
   
   int main(int argc, char** argv){
     ros::init(argc, argv, "my_tf_listener");
   
     ros::NodeHandle node;
   
       
     tf::TransformListener listener1;
   tf::TransformListener listener2;


     ros::Rate rate(20);

	int state = 0;

     while (node.ok()){
       tf::StampedTransform transform1;
	tf::StampedTransform transform2;
       try{
         listener1.lookupTransform("/right_hand" , "/right_shoulder",                           
                                     ros::Time(0), transform1);
	listener2.lookupTransform("/left_hand" , "/left_shoulder",                   
                                     ros::Time(0), transform2);

       }
       catch (tf::TransformException ex){
         ROS_ERROR("%s",ex.what());

       }


printf("\nRIGHT: %f %f %f\tLEFT: %f %f %f\n",transform1.getOrigin().x(),
                                  transform1.getOrigin().y(),transform1.getOrigin().z(), transform2.getOrigin().x(),
                                  transform2.getOrigin().y(),transform2.getOrigin().z());
                                 
   /*
	//if(transform1.getOrigin().y()&&transform1.getOrigin().x()){
	
	printf("\n\nhaha the the right hand position is : %f , %f\nhaha the the left hand position is : %f , %f",transform1.getOrigin().z(),
                                  transform1.getOrigin().x(),transform2.getOrigin().z(),
                                  transform2.getOrigin().x());

	//}
	

	//printf("hahahahaa u are an ass");

	if(!state)
		if((transform1.getOrigin().x()-transform2.getOrigin().x())<(-0.8)){              //(transform1.getOrigin().x()-transform2.getOrigin().x())>0.8||
			state=1;
			continue;		
	}

	if(state){
		if((transform1.getOrigin().x()-transform2.getOrigin().x())>(-0.8))              //(transform1.getOrigin().x()-transform2.getOrigin().x())<0.8||
			printf("\nU jus gave an air-hug !!! ASS ! ");
		

		//printf("hahahahaa u have arms wide open like an ass");
		else
			printf("\nhaha");
		}
	

*/
       rate.sleep();
     }
     return 0;
   };

