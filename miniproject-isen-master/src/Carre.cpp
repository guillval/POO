#include<stdio.h>
#include"Carre.h"




Carre::Carre(const int h, Point c):Figure(h,h,c)
{
image.resize(width * height);

for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      image[j*width+i]=255;
    }
  }

/*setPoint(c.getX(),c.getY());
for (int i=c.getX() ; i <= (c.getX()+largeur); i++) {
      setPoint(i,c.getY());
      setPoint(i,(c.getY()+largeur));
    }

for (int j = c.getY(); j <= (c.getY()+largeur); j++){
      setPoint(c.getX(),j);
      setPoint((c.getX()+largeur),j);
}*/
}
