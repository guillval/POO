//
//  Drawing.cpp
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//

#include "Drawing.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb_image_write.h>
#include <stdexcept>
#include<vector>
#include "Figure.h"
#include "Croix.h"
#include "Point.h"
#include "Rectangle.h"
#include "Carre.h"
#include"Segment.h"

//            _    _  _                     _    _           _
//  ___  _ _ | |_ | |<_> ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| | || . \| || |/ | ' | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/`___||___/|_||_|\_|_. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

Drawing::Drawing(const int width, const int height)
    : width(width), height(height) {
  image.resize(width * height);
}

Drawing::~Drawing() {}

/* Save image to file "filename" */
void Drawing::save(std::string filename) {

  if (filename.substr(filename.find_last_of(".") + 1) != "bmp") {
    throw std::runtime_error(
        "Drawing ne supporte que l'enregistrement d'images au format bmp");
  }

  //createTestImage();
  draw();
  stbi_write_bmp(filename.c_str(), width, height, 1, image.data());
}

//            _             _                      _    _           _
//  ___  _ _ <_> _ _  ___ _| |_ ___  ._ _ _  ___ _| |_ | |_  ___  _| | ___
// | . \| '_>| || | |<_> | | | / ._> | ' ' |/ ._> | |  | . |/ . \/ . |<_-<
// |  _/|_|  |_||__/ <___| |_| \___. |_|_|_|\___. |_|  |_|_|\___/\___|/__/
// |_|

/* Set every point of the image to 0 */
void Drawing::clearImage() {
  for (std::vector<char>::iterator it = image.begin(); it != image.end();
       it++) {
    *it = 0;
  }
}

/* Set image to test */
void Drawing::createTestImage() {
/*code de test*/
//Figure **TabFigure = new Figure*[3];
/*Point p(3,3);
Point p2(0,9);
Point p3(7,7);
TabFigure[0]=new Carre(3,p);
TabFigure[1]= new Rectangle(2,4,p2);
TabFigure[2]= new Croix(3,3,p3);
Tabx[0]=TabFigure[0]->GetH();
Taby[0]=TabFigure[0]->GetW();
Tabx[1]=TabFigure[1]->GetH();
Taby[1]=TabFigure[1]->GetW();
Tabx[2]=TabFigure[2]->GetH();
Taby[2]=TabFigure[2]->GetW();
image=TabFigure[2]->GetVector();
draw();*/

}

/*Draw Figure on image*/
void Drawing::draw(){
int cx,cy,cpix;
int j=0;
int x=0;
int y=0;
char val;
int actu;
std::vector<char> imagefigure;
//boucle pour toute les figures du tableau de figures
for(auto i=TabFigure.begin(); i<TabFigure.end();i++)
{
  actu=0;
  x=0;
  y=0;
  imagefigure=TabFigure[j]->GetVector();
  cx=TabFigure[j]->centre.getX();
  cy=TabFigure[j]->centre.getY();
  /*affichage de debogage
  cout<<"H:"<<cx<<endl;
  cout<<"W:"<<cy<<endl;
  cout<<"H:"<<Tabx[j]<<endl;
  cout<<"W:"<<Taby[j]<<endl;*/
  if(cy==0)cy=1;
  if(cx==0)cx=1;
  //calcul numéro de pixels du centre
  cpix=((height-cy)*width)+(cx-1);
  //boucle pour attribuer la valeur de tous les pixels de la figure sur l'image
  for(int k=0; k<(Tabx[j]*Taby[j]); k++)
  {
   //calcul du pixel actuel
   actu=cpix+(width*y)+x;
   //affichage debogage
   //cout<<actu<<endl;
   //le pixel de l image prend la valeur du pixel de la figure correspondant
   image[actu]=imagefigure[k];
   //si la premiere ligne de la figure n est pas terminée on continue
   if(x<(Taby[j]-1))
   {
   x++;
   }else
   {//si la premiere ligne de la figure est terminée on passe a la suivante
   x=0;
   y++;
   }
  }  
  j++;
}

}
