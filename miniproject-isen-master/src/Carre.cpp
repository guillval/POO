//
//  Carre.cpp
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//

#include<stdio.h>
#include"Carre.h"



//déclaration constructeur Carre
Carre::Carre(const int h, Point c):Figure(h,h,c)
{
image.resize(width * height);
//met a blanc tout les pixel du carré
for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      image[j*width+i]=255;
    }
  }

}
