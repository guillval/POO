//
//  Croix.cpp
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//

#include<stdio.h>
#include"Croix.h"



//déclaration constructeur croix
Croix::Croix(const int h, const int l, Point c): Figure(h,l,c)
{
image.resize(width * height);
//dessine une croix blanche dans un carre de width*height
centre_interne=(h+1)/2;
for (int i = 0; i <= width; i++) {
      setPoint(i,centre_interne);
    }
for (int j = 0; j <= height; j++){
      setPoint(centre_interne,j);
}
 
}



