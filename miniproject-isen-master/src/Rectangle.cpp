#include<stdio.h>
#include"Rectangle.h"




Rectangle::Rectangle(const int h, const int w, Point c):Figure(h,w,c)
{
image.resize(width * height);
for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      image[j * width + i] = 255;
    }
  }
/*
setPoint(c.getX(),c.getY());
for (int i=c.getX() ; i <= (c.getX()+largeur); i++) {
      setPoint(i,c.getY());
    }

for (int j = c.getY(); j <= (c.getY()+longueur); j++){
      setPoint(c.getX(),j);
}
for (int k= c.getX() ; k<=(c.getX()+largeur); k++) {
      setPoint(k,(c.getY()+longueur));
}
for (int l= c.getY() ; l <= (c.getY()+longueur); l++) {
      setPoint((c.getX()+largeur),l);
}*/ 
}
