#include "mandelbrot.h"
#include <complex> // for complex numbers
#include <fstream> // for files manipulation
#include <iostream>

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;

void OpenCVDisplay() {
  Mat image;
  image = imread("mandelbrot.ppm");
  namedWindow("Mandelbrot", WINDOW_AUTOSIZE);
  imshow("Mandelbrot", image);
  waitKey(0);
}

void InputSize(Mandelbrot &man) {
  std::cout << "Enter desired width and height of image (Ex:500 500): ";
  int w;
  int h;
  std::cin >> w >> h;
  if (w > 0 && h > 0) {
    man.SetHeight(h);
    man.SetWidth(w);
  } else {
    std::cout << "Error: invalid inputs";
  }
}

int main() {
  Mandelbrot man;
  InputSize(man);
  std::ofstream my_Image("mandelbrot.ppm");
  if (my_Image.is_open()) {
    my_Image << "P3\n" << man.GetWidth() << " " << man.GetHeight() << " 255\n";
    for (int i = 0; i < man.GetWidth(); i++) {
      for (int j = 0; j < man.GetHeight(); j++) {
        int val = man.GetValue(i, j);
        my_Image << 0 << ' ' << 0 << ' ' << val << "\n";
      }
    }
    OpenCVDisplay();
  } else {
    std::cout << "Could not open the file";
  }
  my_Image.close();
  return 0;
}