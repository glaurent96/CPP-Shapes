//circle.cpp
//Laurent, Gilles

#include <iostream>
#include "grid.h"
#include "circle.h"
using namespace std;

Circle::Circle(int i, int j){
    x = i;
    y = j;
}

Circle::~Circle(){}

void Circle::draw(Grid &grid){
    for (int i = x; i < x + 4; i++){
        for (int j = y; j < y + 6; j++){
            if ((i == x + 1 && j == y) || (i == x + 2 && j == y) || (i == x && j == y + 1) || (i == x+3 && j == y + 1) ||
            (i == x && j == y+2) || (i == x+3 && j == y+2) ||(i == x+1 && j == y+3) || (i == x+2 && j == y+3)){
                grid.set(i, j, 'o');
            }
        }
    }
}
