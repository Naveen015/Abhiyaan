#include "ros/ros.h"
#include "std_msgs/String.h"
 
int main(int argc, char **argv)
{    ros::init(argc, argv, "talker"); 
     ros::NodeHandle n;
     ros::Publisher message = n.advertise<std_msgs::String>("random_messages",1000);
     ros::Rate loop_rate(10);
     int count = 0;
     while (ros::ok())
     {std_msgs::String msg;
      std::stringstream s;
      s << "Hello World " << count;
      msg.data = s.str();
      ROS_INFO("%s", msg.data.c_str());
      message.publish(msg);
      ros::spinOnce();
      loop_rate.sleep();
      count++;
     }
     return 0;
 }
