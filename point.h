//point.h
//Laurent, Gilles

#include "shape.h"

#ifndef POINT_H
#define POINT_H

class Point : public Shape{
protected:
    char character;
public:
    Point(int i, int j, char c);
    ~Point();
    void draw(Grid &grid);
};
#endif
