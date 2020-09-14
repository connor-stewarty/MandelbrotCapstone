#include "mandelbrot.h"

Mandelbrot::Mandelbrot() {
  width = 600;
  height = 600;
}

Mandelbrot::Mandelbrot(int w, int h) {
  width = w;
  height = h;
}

int Mandelbrot::GetValue(int x, int y) {
  std::complex<float> point((float)x / width - 1.5, (float)y / height - 0.5);
  // we divide by the image dimensions to get values smaller than 1
  // then apply a translation
  std::complex<float> z(0, 0);
  unsigned int nb_iter = 0;
  while (abs(z) < 2 && nb_iter <= 34) {
    z = z * z + point;
    nb_iter++;
  }
  if (nb_iter < 34)
    return (255*nb_iter)/33;
  else  
    return 0;
}

void Mandelbrot::SetWidth(int w) { width = w; }
void Mandelbrot::SetHeight(int h) { height = h; }

int Mandelbrot::GetWidth() const { return width; }
int Mandelbrot::GetHeight() const { return height; }