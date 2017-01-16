#include<opencv2\opencv.hpp>
#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
using namespace cv;
int main() {
	cv::Mat picture =cv:: imread("a.jpg");
	if (!picture.data) {
		return 1;
	}
	//读取源图像并转换为灰度图像
	cv::Mat srcGray;
	cv::cvtColor(picture, srcGray, CV_RGB2GRAY);
	//显示源图像及灰度图像
	cv::imshow("picture", picture);
	cv::imshow("srcGray", srcGray);
	imshow("测试程序", picture);
	waitKey(20150910);
	return 0;
}