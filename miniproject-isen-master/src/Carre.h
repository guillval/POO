#ifndef CARRE_H
#define CARRE_H

#include <string>
#include "Figure.h"
#include <vector>

#include "Point.h"
class Carre:public Figure {
public:
     Carre(const int h, const int w, Point c, int largeur);
       
protected: 
  
private:
int largeur;


};

#endif /* CARRE_H */
