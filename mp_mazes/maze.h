/* Your code here! */
#pragma once

#include "dsets.h"
#include "cs225/PNG.h"
#include <vector>
#include <stack>
#include <map>
#include <queue>

using namespace cs225;

class SquareMaze {
  public:
    void makeMaze(int width, int height);
    void setWall(int x, int y, int dir, bool exists);
    bool canTravel(int x, int y, int dir) const;
    std::vector< int > solveMaze();
    cs225::PNG * drawMaze()	const;
    cs225::PNG * drawMazeWithSolution();

  private:
    DisjointSets grid_;
    std::vector<bool> rightWall_;
    std::vector<bool> downWall_;
    std::queue<std::pair<int, int>> position_;
    std::vector<int> dirs_;
    std::vector<std::vector<bool>> visited_;
    std::vector<int> _lastRow;
    std::map<int, int> _path;
    int width_;
    int height_;
    int dimension_;

    void colorBlack(HSLAPixel &pixel) const;

    void colorRed(HSLAPixel &pixel) const;

    void colorPixel(HSLAPixel &pixel, float color) const;
};
