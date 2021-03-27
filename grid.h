//grid.h
//Laurent, Gilles

#ifndef GRID_H
#define GRID_H

#define GRID_HEIGHT 24
#define GRID_WIDTH 60

class Grid{
public:
    Grid();
    ~Grid();
    void set(int x, int y, char c);
    void print();
    void draw(Grid &grid);
private:
    char grid[GRID_HEIGHT][GRID_WIDTH];
};
#endif
