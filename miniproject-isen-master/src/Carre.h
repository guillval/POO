//
//  Carre.h
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//

#ifndef CARRE_H
#define CARRE_H

#include <string>
#include "Figure.h"
#include <vector>

#include "Point.h"
class Carre:public Figure {
public:
     Carre(const int h, Point c);
       
protected: 
  
private:
int largeur;


};

#endif /* CARRE_H */
