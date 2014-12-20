#include <ros/ros.h>
#include <ros/package.h>
#include <body_msgs/Skeletons.h>
#include <gesture/HandPos.h>

void chatterCallback(const gesture::HandPos::ConstPtr& msg )
{
  ROS_INFO("I heard: [%f]", msg->left_position.x);
  ROS_INFO("I heard: [%f]", msg->left_position.y);
  ROS_INFO("I heard: [%f]", msg->left_position.z);

}

int main(int argc, char **argv)
{
  
  ros::init(argc, argv, "listener");

  ros::NodeHandle n;


  ros::Subscriber sub = n.subscribe("/hand_position", 1000, chatterCallback);

  ros::spin();

  return 0;
}
