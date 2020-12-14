#include "Drawing.h"

#define STB_IMAGE_WRITE_IMPLEMENTATION
#include <stb_image_write.h>
#include <stdexcept>
#include "Figure.h"
#include "Croix.h"
#include "Point.h"
#include "Rectangle.h"
#include "Carre.h"
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

  createTestImage();
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
//Figure **TabFigure = new Figure*[3];
Point p(3,3);
Point p2(0,5);
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
//image=TabFigure[2]->GetVector();
draw();

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

for(int i=0; i<=2;i++)
{
  actu=0;
  x=0;
  y=0;
  imagefigure=TabFigure[i]->GetVector();
  cx=TabFigure[i]->centre.getX();
  cy=TabFigure[i]->centre.getY();
  printf("H:%d\n",cx);
  printf("W:%d\n",cy);
  printf("H:%d\n",Tabx[i]);
  printf("W:%d\n",Taby[i]);
  if(cy==0)cy=1;
  if(cx==0)cx=1;
  cpix=((height-cy)*width)+(cx-1);
  
  for(int k=0; k<(Tabx[i]*Taby[i]); k++)
  {
   actu=cpix+(width*y)+x;
   printf("%d\n",actu);
   image[actu]=imagefigure[k];
   if(x<(Taby[i]-1))
   {
   x++;
   }else
   {
   x=0;
   y++;
   }
  }  
  
}

}
