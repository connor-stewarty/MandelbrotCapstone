# CPPND: Mandelbrot Capstone

This is my captsone project for the Udacity C++ nanodegree course. I chose project opition one to build something of my choice. The main method is for the image creating and outputing using the CV library. The mandelbrot class deals with the calculations for the image as well as its parameters. 

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/
* OpenCV >= 4.1
  * The OpenCV 4.1.0 source code can be found [here](https://github.com/opencv/opencv/tree/4.1.0)
* MobaXterm or alternative if using WSL
  * export DISPLAY=:0

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./MandelbrotCapstone`.

## Rubric
* Compiling and Testing 
  * The project compiles without errors and uses cmake and make
* Loops, Functions, I/O
  * A variety of control structures are used in the project and is organized into functions.
  * The project outputs to a .ppm file. 
  * The project takes user input in the form of a desired width and height. 
* Object Oriented Programming
  * The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.
  * All class data members are explicitly specified as public or private.
  
## Credit
https://medium.com/farouk-ounanes-home-on-the-internet/mandelbrot-set-in-c-from-scratch-c7ad6a1bf2d9
