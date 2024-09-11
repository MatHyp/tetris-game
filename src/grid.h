//
// Created by mateusz on 9/11/24.
//
#pragma once
#include <vector>
#include <raylib.h>
using namespace std;

#ifndef GRID_H
#define GRID_H


class Grid
{
  public:
    Grid();
    void Initialize();
    void Print();
    void Draw();
    int grid[20][10];



  private:
    vector<Color> GetCellColors();
    vector<Color> colors;
    int numRows;
    int numColumns;
    int cellSize;
};



#endif //GRID_H
