#include<stdio.h>
#include"Carre.h"




Carre::Carre(const int h, const int w, Point c, int largeur):Figure(h,w,c), largeur(largeur)
{

setPoint(c.getX(),c.getY());
for (int i=c.getX() ; i <= (c.getX()+largeur); i++) {
      setPoint(i,c.getY());
      setPoint(i,(c.getY()+largeur));
    }

for (int j = c.getY(); j <= (c.getY()+largeur); j++){
      setPoint(c.getX(),j);
      setPoint((c.getX()+largeur),j);
}
}
