#!/usr/bin/env python
import rospy
from std_msgs.msg import String
def callback(msg):
   print msg.data
rospy.init_node('topic_subscriber')
sub = rospy.Subscriber('random_messages', String, callback)
rospy.spin()
