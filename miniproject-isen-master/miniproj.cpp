#include <iostream>
#include <string>

#include "Drawing.h"
#include "Figure.h"

const int width = 100;
const int height = 100;

int main(int argc, char **argv) {

  Drawing draw(width, height);

  draw.save(std::string("test_image.bmp"));

  return 0;
}
