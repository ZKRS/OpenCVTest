#include<opencv2\opencv.hpp>
#include"opencv2/imgproc/imgproc.hpp"
#include"opencv2/highgui/highgui.hpp"
using namespace cv;
int main() {
	cv::Mat picture =cv:: imread("a.jpg");
	if (!picture.data) {
		return 1;
	}
	//��ȡԴͼ��ת��Ϊ�Ҷ�ͼ��
	cv::Mat srcGray;
	cv::cvtColor(picture, srcGray, CV_RGB2GRAY);
	//��ʾԴͼ�񼰻Ҷ�ͼ��
	cv::imshow("picture", picture);
	cv::imshow("srcGray", srcGray);
	imshow("���Գ���", picture);
	waitKey(20150910);
	return 0;
}