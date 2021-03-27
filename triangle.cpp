//triangle.cpp
//Laurent, Gilles

#include <iostream>
#include "grid.h"
#include "triangle.h"
using namespace std;

Triangle::Triangle(int i, int j){
    x = i;
    y = j;
}

Triangle::~Triangle(){}

void Triangle::draw(Grid &grid){
    for (int i = x; i < x+5; i++) {
        for (int j = y; j < y+4; j++) {
            if ((i == x+2 && j == y) || (i == x+1 && j == y+1) || (i == x+3 && j == y+1) || (j == y+2)){
                grid.set(i, j, '+');
            }
        }
    }
}
