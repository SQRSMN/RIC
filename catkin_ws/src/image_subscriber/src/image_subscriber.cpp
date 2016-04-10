#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>

using namespace ros;
using namespace cv;
using namespace std;

Mat matMinus1;
Mat matNow;
Mat imageDiff;
int firstrun = 1;


void imageCallback(const sensor_msgs::ImageConstPtr& image)
{
sensor_msgs::ImageConstPtr imageInOne_;
imageInOne_ = image;

cv_bridge::CvImagePtr imageInOne = cv_bridge::toCvCopy(imageInOne_);

Mat matNow = imageInOne->image;
if(firstrun == 1){
matMinus1 = matNow;
firstrun = 0;
}
absdiff(matMinus1, matNow, imageDiff);
matMinus1 = matNow;

Mat imageOut_ = imageDiff;
    cv::imshow("view", imageOut_);

}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "image_subscriber");
  ros::NodeHandle nh;
  cv::namedWindow("view");
  cv::startWindowThread();
  image_transport::ImageTransport it(nh);
  image_transport::Subscriber sub = it.subscribe("camera/depth/image", 0.01, imageCallback);
  ros::spin();
  cv::destroyWindow("view");
}


