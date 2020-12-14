#include<stdio.h>
#include"Figure.h"




Figure::Figure(const int width, const int height, Point c): width(width), height(height),centre(c) {
  image.resize(width * height);
}


void Figure::setPoint(int l,int h)
{if(l==0)
  {image[(height-h)*width+(l)] = 255;
  }else
  {
  image[(height-h)*width+(l-1)] = 255;
  }
}

const std::vector<char>& Figure::GetVector() 
{
return image;
}

Point Figure::GetCentre()
{
return centre;
}

int Figure::GetH()
{
return height;
}

int Figure::GetW()
{
return width;
}

/*int Figure::GetPointx()
{
int x;
x=Get
}*/
