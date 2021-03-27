//point.cpp
//Laurent, Gilles

#include <iostream>
#include "grid.h"
#include "point.h"
using namespace std;

Point::Point(int i, int j, char c){
    x = i;
    y = j;
    character = c;
}

Point::~Point(){}

void Point::draw(Grid &grid){
    grid.set(x, y, character);
}
