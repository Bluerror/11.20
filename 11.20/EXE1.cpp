//#include<opencv2/opencv.hpp>
//#include<iostream>
//using namespace cv;
//int main()
//{
//	cv::Mat scrMat = imread("C://Users//Lenovo//source//repos//11.20//1.png", 0);
//	cv::Mat dst;
//	cv::bitwise_not(scrMat, dst);
//	/*cv::Mat dst = 255 - scrMat;*/
//	cv::Mat result;
//	
//	threshold(dst, result, 200, 255, THRESH_OTSU);
//	
//
//	std::vector<std::vector<Point>>contours;
//	std::vector<Vec4i>hierarchy;
//	findContours(result, contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_NONE, Point());
//
//
//	for (int i = 0; i < contours.size(); i++) {
//		RotatedRect rbox = minAreaRect(contours[i]);
//
//		float width = (float)rbox.size.width;
//		float height = (float)rbox.size.height;
//		float ratio = width / height;
//		if (ratio = 1.0 && ratio > 0.9) {
//			drawContours(result, contours, i, Scalar(0, 255, 0), 1, 8);
//			cv::Point2f vtx[4];
//			rbox.points(vtx);
//			for (int i = 0; i < 4; ++i) {
//				cv::line(result, vtx[i], vtx[i < 3 ? i + 1 : 0], cv::Scalar(255, 255, 255), 2, CV_AA);
//
//			}
//		}
//
//	}
//
//	imshow("final", result);
//	
//	waitKey(0);
//	return 0;
//}
//

	
