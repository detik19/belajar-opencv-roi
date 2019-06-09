#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>

using namespace cv;
using namespace std;
int main()
{
	Mat image = imread("D:/sign.jpg");
	String windowName = "OpenCV Window";
	Mat roi(image, Rect(840, 60, 200, 200));
	dilate(roi, roi, Mat(), Point(-1, -1), 5);
	namedWindow(windowName);

	imshow("original", image);
	imshow("roi", roi);

	waitKey(0);

	destroyWindow(windowName);

}