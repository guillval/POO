#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "Figure.h"
#include <vector>

#include "Point.h"
class Rectangle:public Figure {
public:
     Rectangle(const int h, const int w, Point c, int largeur, int longeur);
       
protected: 
  
private:
int largeur;
int longueur;

};

#endif /* CROIX_H */
