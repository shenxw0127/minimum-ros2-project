#include <cstdio>
#include <opencv4/opencv2/opencv.hpp>

int main(int argc, char ** argv)
{
  (void) argc;
  (void) argv;

  cv::Mat image = cv::imread("image.jpg");

  printf("Hello world!\n");
  return 0;
}
