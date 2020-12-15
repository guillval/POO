//
//  Figure.h
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//

#ifndef FIGURE_H
#define FIGURE_H

#include <string>
#include <vector>
#include "Point.h"

class Figure {
public:
    const std::vector<char>& GetVector(); 
    Point GetCentre();  
    int GetH();
    int GetW();
    Point centre;

protected: 
  Figure(const int width, const int height, Point c);
  void setPoint(int l, int h);
  const int width;
  const int height;

  std::vector<char> image;

};

#endif /* FIGURE_H */
