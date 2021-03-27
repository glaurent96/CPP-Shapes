//grid.cpp
//Laurent, Gilles

#include "grid.h"
#include <iostream>
using namespace std;

Grid::Grid(){
	for (int y = 0; y < 24; y++) {
		for (int x = 0; x < 60; x++) {
			grid[y][x] = ' ';
        }
    }
}

Grid::~Grid(){}

void Grid::set(int x, int y, char c){
	if (x < 0 || y < 0 || x >= GRID_WIDTH || y >= GRID_HEIGHT)
		return;

    grid[y][x] = c;
}

void Grid::print(){
	for (int y = 0; y < 24; y++) {
		for (int x = 0; x < 60; x++) {
            cout << grid[y][x];
        }
        cout << endl;
    }
}
