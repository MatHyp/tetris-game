#include <iostream>
#include <raylib.h>
#include <raymath.h>


#include "src/grid.h";
using namespace std;

int main()
{
  InitWindow(300, 600, "raylib Tetris");
  SetTargetFPS(60);

     Grid grid;
  grid.grid[0][0] = 1;
  grid.grid[3][5] = 4;
  grid.grid[17][8] = 7;


     grid.Print();

  while(WindowShouldClose() == false) {
          BeginDrawing();

          ClearBackground(RED);
          grid.Draw();
          EndDrawing();
     };

     return 0;
}
