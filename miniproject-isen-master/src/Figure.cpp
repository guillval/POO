//
//  Figure.cpp
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//

#include<stdio.h>
#include"Figure.h"




Figure::Figure(const int width, const int height, Point c): width(width), height(height),centre(c) {
  image.resize(width * height);
}

//fonction qui place en fonction de coordonnées x et y le pixel correspondant à 255 
void Figure::setPoint(int l,int h)
{if(l==0)
  {image[(height-h)*width+(l)] = 255;
  }else
  {
  image[(height-h)*width+(l-1)] = 255;
  //calcul du pixel en fonction de la largeur et de la hauteur ainsi que des coordonnées x et y
  }
}
//renvoi le vecteur image
const std::vector<char>& Figure::GetVector() 
{
return image;
}
//renvoi un point qui correspond au centre de la figure
Point Figure::GetCentre()
{
return centre;
}
//renvoi la hauteur
int Figure::GetH()
{
return height;
}
//renvoi la largeur
int Figure::GetW()
{
return width;
}


