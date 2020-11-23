#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>
#include "Point.h"

class Figure {
public:
    const std::vector<char>& GetVector();   
protected: 
  Figure(const int width, const int height, Point c);
  void setPoint(int l, int h);
  const int width;
  const int height;
  Point centre;
  std::vector<char> image;

};

#endif /* FIGURE_H */
