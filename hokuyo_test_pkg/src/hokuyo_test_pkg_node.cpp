#include "ros/ros.h"
#include "std_msgs/String.h"
#include "sensor_msgs/LaserScan.h"
void scanValues(const sensor_msgs::LaserScan laser)
{
fprintf(stderr,"\n -------- size[%d] ---------- ", laser.ranges.size());
for (unsigned int i=0; i<laser.ranges.size();i++)
{
fprintf(stderr,"range[%d]=[%f]: ", i, laser.ranges[i]);
//This is a test
}
}
int main(int argc, char **argv)
{
ros::init(argc, argv, "hLaserReader");
ros::NodeHandle n;
ros::Subscriber hokuyoSubscriber = n.subscribe("/scan", 1, scanValues);
ros::spin();
return 0;
}
