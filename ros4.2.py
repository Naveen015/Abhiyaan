#!/usr/bin/env python
import rospy
from std_msgs.msg import Int32

pub = rospy.Publisher('battery_warning_light', Int32, queue_size =1)
value = 0

def callback(msg):
    global value 
    value = msg.data
    print value
   
def listener():
   rospy.init_node('topic_subscriber')
   sub = rospy.Subscriber('battery_level', Int32, callback)
   rate = rospy.Rate(1)

   #rospy.init_node('topic_publisher')
   i=0   
   while not rospy.is_shutdown():
      count = 1
      i +=1
      if value<=33:
         if i%2!=0:
             count=1
             pub.publish(count)
         else:
             count = 0
             pub.publish(count)
      if value>33:
             pub.publish(count)
  
      rate.sleep()

if __name__=='__main__':
    listener()




