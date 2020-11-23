#ifndef POINT_H
#define POINT_H

#include <string>
#include <vector>

class Point 
{
    public:
        Point(int x=0, int y=0); //constructeur
        ~Point();//destructeur
        int getX() const;
        int getY() const;
        void setX(int x);
        void setY(int y);
    private:
        int x;
        int y;
};


#endif /* POINT_H */
