//circle.h
//Laurent, Gilles

#include "shape.h"

#ifndef CIRCLE_H
#define CIRCLE_H

class Circle : public Shape{
public:
    Circle(int i, int j);
    ~Circle();
    void draw(Grid &grid);
};
#endif
