#include<stdio.h>
#include"Croix.h"




Croix::Croix(const int h, const int l, Point c): Figure(h,l,c)
{
image.resize(width * height);

centre_interne=(h+1)/2;
for (int i = 0; i <= width; i++) {
      setPoint(i,centre_interne);
    }
for (int j = 0; j <= height; j++){
      setPoint(centre_interne,j);
}
 
}



