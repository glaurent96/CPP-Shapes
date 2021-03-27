//square.cpp
//Laurent, Gilles

#include <iostream>
#include "grid.h"
#include "square.h"
using namespace std;

Square::Square(int i, int j, int size){
    x = i;
    y = j;
    s = size;
}

Square::~Square(){}

void Square::draw(Grid &grid){
    for (int i = x; i < x + s; i++) {
        for (int j = y; j < y + s; j++) {
            if (i == x || j == y || i == (x + s - 1) || j == (y + s - 1)){
                grid.set(i, j, '*');
            }
        }
    }
}
