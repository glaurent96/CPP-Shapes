//shape.h
//Laurent, Gilles

#include "grid.h"

#ifndef SHAPE_H
#define SHAPE_H

// Base class
class Shape{
public:
    Shape();
    ~Shape();
    virtual void draw(Grid &grid) = 0;
protected:
    int x;
    int y;
};
#endif
