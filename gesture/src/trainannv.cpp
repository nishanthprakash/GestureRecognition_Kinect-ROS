#include <ros/ros.h>
#include <ros/package.h>
#include "fann.h"
#include <stdio.h>
int main()
{
struct fann *ann ;
ann = fann_create_from_file("gesture_classify.net");

if(ann==NULL){
	ROS_INFO("Creating an ANN....");
	ann = fann_create(1,0.7,3,16,18,20);
	ROS_INFO("Done....");
	}
fann_train_on_file(ann, "training.data",2000,100,0.1);
fann_save(ann, "gesture_classify.net");
fann_destroy(ann);
return 0;
}
