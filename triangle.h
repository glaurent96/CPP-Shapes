//triangle.h
//Laurent, Gilles

#include "shape.h"

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle : public Shape{
public:
    Triangle(int i, int j);
    ~Triangle();
    void draw(Grid &grid);
};
#endif
