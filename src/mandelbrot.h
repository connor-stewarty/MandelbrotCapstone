#include <complex>
#include <fstream>
#include <iostream>

#ifndef MANDELBROT_H
#define MANDELBROT_H

class Mandelbrot {
private:
  int width;
  int height;

public:
  Mandelbrot();
  Mandelbrot(int w, int h);

  int GetValue(int x, int y);

  void SetWidth(int w);
  void SetHeight(int h);

  int GetWidth() const;
  int GetHeight() const;
};

#endif