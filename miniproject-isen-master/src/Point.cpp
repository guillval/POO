//
//  Point.cpp
//  Projet POO ISEN
//
//  Created by Valette Guillaume and Fantin Anthony on 13/12/2020.
//  Copyright © 2020 Valette Guillaume and Fantin Anthony . All rights reserved.
//

#include <iostream>
#include "Point.h"

Point::Point(int x, int y):x(x), y(y) //constructeur
{}

Point::~Point()//destructeur
{}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::setX(int Newx)
{
    x=Newx;
}

void Point::setY(int Newy)
{
    y=Newy;
}
