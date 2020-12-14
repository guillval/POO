#ifndef DRAWING_H
#define DRAWING_H

#include <string>
#include <vector>
#include "Point.h"
#include "Figure.h"
#include "Carre.h"
#include "Croix.h"


class Drawing {
public:
  Drawing(const int width, const int height);
  ~Drawing();

  void save(std::string filename);
  void draw();

private:
  void clearImage();
  void createTestImage();

protected:
  const int width;
  const int height;
  Figure *TabFigure[10];
  int Tabx[10];
  int Taby[10];
  std::vector<char> image;
};

#endif /* DRAWIN_H */
