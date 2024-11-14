#include <opencv2/highgui.hpp>
#include <cstdio>

int main(int argc, char** argv){
	if (argc < 2) {
		std::fprintf(stderr, "Usage: %s <image path>", argv[0]);
		return 1;
	}

	cv::Mat img = cv::imread(argv[1], cv::IMREAD_UNCHANGED);
	cv::namedWindow("Image", cv::WINDOW_NORMAL);
	
	if (img.empty()){
		std::fprintf(stderr, "Error: Cannot Read Image At %s", argv[1]);		
		return 2;
	}

	cv::imshow("Image", img);

	cv::waitKey(0);
	
	return 0;
}
