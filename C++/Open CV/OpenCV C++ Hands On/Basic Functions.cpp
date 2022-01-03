#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


// Basic Image Functions

int main()
{
	/*
	// Basic Image processing- Gray Scale, Blur, Detect/Trace Edges


	string path = "resources/test.png";
	Mat img = imread(path), imgGray, imgBlur, imgTrace, imgTrcThick, imgTrcThin;
	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));   //Creates a Kernel to use with Dilate and Erode ***Size should be odd like (3,3) or (5,5) or (7,7)*******

	cvtColor(img, imgGray, COLOR_BGR2GRAY);				// Convert image to gray scale
	GaussianBlur(img, imgBlur, Size(5, 5), 10, 0);		// Convert image to gray scale
	Canny(imgBlur, imgTrace, 50, 75);					// Convert image to gray scale

	dilate(imgTrace, imgTrcThick, kernel);				//Thickening the Traced Edges
	erode(imgTrcThick, imgTrcThin, kernel);				//Thinning the Thickened Edges


	imshow("Color Image", img);
	imshow("GrayScale Image", imgGray);
	imshow("Blured Image", imgBlur);
	imshow("Traced Image", imgTrace);
	imshow("Traced Image Thicken", imgTrcThick);
	imshow("Traced Image Thinned", imgTrcThin);
	waitKey(0);
	*/
	
	return 0;
}