//
//  Croix.h
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//
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

