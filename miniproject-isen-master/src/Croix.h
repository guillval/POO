#ifndef CROIX_H
#define CROIX_H

#include <string>
#include "Figure.h"
#include <vector>

#include "Point.h"
class Croix:public Figure {
public:
     Croix(const int h, const int l, Point c);
       
protected: 
  
private:
int centre_interne;

};

#endif /* CROIX_H */

