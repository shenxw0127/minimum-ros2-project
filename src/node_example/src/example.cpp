#include <cstdio>
#include <opencv4/opencv2/opencv.hpp>

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  cv::Mat image = cv::imread("image.jpg");
  if (image.empty()) {
    printf("Could not open or find the image\n");
    return -1;
  }

  cv::imshow("Display window", image);
  cv::waitKey(0);
  // return 0;

  printf("hello world hello_l package\n");
  return 0;
}
