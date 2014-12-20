#!/bin/sh
export ROS_PACKAGE_PATH=~/GR:$ROS_PACKAGE_PATH
while :
do
echo
echo "Choose : 1.Gesture Training	2.Gesture Recognition	3.Exit"
read response
	case "$response" in
		1) 	roslaunch gesture handposition.launch > /dev/null &
			count=`ls ../data | wc -l`
			echo "Starting Training No. : `expr $count + 1`"
			sleep 20
			rosrun gesture trainsub
			echo "Do you want the previous training data to be used for training the ANN ? (y/n)"
			read response	
			case "$response" in
				y|Y)	rosrun gesture trainannv
					mv "~/training.data" "../data/tr$count"
						;;

				n|N)	echo "Gesture training data discarded !!!" 
					rm "~/training.data"
					;;
				esac
			;;
	
		2) 	roslaunch gesture handposition.launch
			sh
			rosrun gesture recsub
			;;

		3)	break
			;;		
	esac
done
