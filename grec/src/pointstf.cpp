   
// You need to have the openni_kinect stack

   #include <ros/ros.h>
   #include <tf/transform_listener.h>
 
   
   int main(int argc, char** argv){
     ros::init(argc, argv, "my_tf_listener");
   
     ros::NodeHandle node;
   
       
	tf::TransformListener listener;


     ros::Rate rate(20);  // i ve set it to 20Hz for the loop...

	int state = 0;

     while (node.ok()){
        tf::StampedTransform transform1;
	tf::StampedTransform transform2;
	tf::StampedTransform transform3;
	tf::StampedTransform transform4;
	tf::StampedTransform transform5;
	tf::StampedTransform transform6;
	tf::StampedTransform transform7;
	tf::StampedTransform transform8;
	tf::StampedTransform transform9;
	tf::StampedTransform transform10;
	tf::StampedTransform transform11;
	tf::StampedTransform transform12;
	tf::StampedTransform transform13;
	tf::StampedTransform transform14;
       try{

        listener.lookupTransform("/neck" , "/head", ros::Time(0), transform1); // head of user tracked by openni taken as origin.. use camera tf or /openni_tracker for tfs relative to kinect...best if u use  'view_frames' to check the mapping n get the coordinates u require...

	listener.lookupTransform("/torso" , "/head", ros::Time(0), transform2);
	listener.lookupTransform("/left_shoulder" , "/head", ros::Time(0), transform3);
	listener.lookupTransform("/left_elbow" , "/head", ros::Time(0), transform4);
	listener.lookupTransform("/left_hand" , "/head", ros::Time(0), transform5);
	listener.lookupTransform("/right_shoulder" , "/head", ros::Time(0), transform6);
	listener.lookupTransform("/right_elbow" , "/head", ros::Time(0), transform7);
	listener.lookupTransform("/right_hand" , "/head", ros::Time(0), transform8);
	listener.lookupTransform("/left_hip" , "/head", ros::Time(0), transform9);
	listener.lookupTransform("/left_knee" , "/head", ros::Time(0), transform10);
	listener.lookupTransform("/left_foot" , "/head", ros::Time(0), transform11);
	listener.lookupTransform("/right_hip" , "/head", ros::Time(0), transform12);
	listener.lookupTransform("/right_knee" , "/head", ros::Time(0), transform13);
	listener.lookupTransform("/right_foot" , "/head", ros::Time(0), transform14);

       }
       catch (tf::TransformException ex){
         ROS_ERROR("%s",ex.what());

       }


	ROS_INFO("\nRIGHT HAND position: %f %f %f\nLEFT HAND position: %f %f %f\n",
				transform1.getOrigin().x(),transform8.getOrigin().y(),transform8.getOrigin().z(), 
				transform2.getOrigin().x(),transform5.getOrigin().y(),transform5.getOrigin().z());
	
	//Similarly print the others :P  
                                 

       rate.sleep();
     }
     return 0;
   };

