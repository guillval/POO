//
//  Drawing.h
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//

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
  //vecteur pour tableau de figure, de coordonnees x et y du centre
  std::vector<Figure*> TabFigure;
  std::vector<int> Tabx;
  std::vector<int>Taby;

private:
  void clearImage();
  void createTestImage();

protected:
  const int width;
  const int height;

  std::vector<char> image;
};

#endif /* DRAWIN_H */
