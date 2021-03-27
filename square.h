//square.h
//Laurent, Gilles

#include "shape.h"

#ifndef SQUARE_H
#define SQUARE_H

class Square : public Shape{
protected:
    int s;
public:
    Square(int i, int j, int size);
    ~Square();
    void draw(Grid &grid);
};
#endif
