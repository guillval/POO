#include<stdio.h>
#include"Croix.h"




Croix::Croix(const int h, const int l, Point c): Figure(h,l,c)
{

setPoint(c.getX(),c.getY());
for (int i = 0; i <= width; i++) {
      setPoint(i,c.getY());
    }
for (int j = 0; j <= height; j++){
      setPoint(c.getX(),j);
}
 
}



