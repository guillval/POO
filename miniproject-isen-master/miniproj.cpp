#include <iostream>
#include <string>

#include "Drawing.h"
#include "Figure.h"

const int width = 10;
const int height = 10;

int main(int argc, char **argv) {

  Drawing drawi(width, height);
  //drawi.draw();
  drawi.save(std::string("test_image.bmp"));

  return 0;
}
