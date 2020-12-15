//
//  Segment.cpp
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//

#include<stdio.h>
#include"Segment.h"




Segment::Segment(const int h, const int w,Point c):Figure(h,w,c)
{
image.resize(width * height);
for (int j = 0; j < height; j++) {
    for (int i = 0; i < width; i++) {
      image[j * width + i] = 255;
    }
  }

}
