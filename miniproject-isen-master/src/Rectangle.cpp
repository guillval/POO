#include<stdio.h>
#include"Rectangle.h"




Rectangle::Rectangle(const int h, const int w, Point c, int largeur, int longueur):Figure(h,w,c), largeur(largeur) , longueur(longueur) 
{

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
} 
}
