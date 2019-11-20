#include <iostream>
#include "dsets.h"
#include "maze.h"
#include <cmath>
#include "cs225/PNG.h"
#include <ctime>


using namespace std;

int main()
{
  // Write your own main here
  cs225::HSLAPixel hot_pink(332, 1, .61, 1);
  srand(time(NULL));
  SquareMaze myMaze;

  int radius = 30;
  int width = 200;
  int height = 200;
  double center_x = width / 2 * 10;
  double center_y = height / 2 * 10;


  myMaze.makeMaze(width, height);
  cs225::PNG * mazeOutput = myMaze.drawMazeWithSolution();
  cs225::PNG * maze_copy = mazeOutput;

  for (int x = 0; x < width * 10 + 1; x++) {
    for (int y = 0; y < width * 10 + 1; y++)  {
      double center = sqrt((center_y - y) * (center_y - y) + (center_x - x) * (center_x - x));
      if (center >= radius * 10 - 1) {
        if ((center) >= radius * 10) {
          cs225::HSLAPixel & pixel = mazeOutput->getPixel(x, y);
          pixel = hot_pink;
        }
      }

    }
  }




  mazeOutput->writeToFile("creative.png");
  delete mazeOutput;
  delete maze_copy;
  return 0;
}
