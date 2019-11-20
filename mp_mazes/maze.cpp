/* Your code here! */
#include "maze.h"
#include <cmath>

using namespace cs225;


void SquareMaze::makeMaze(int width, int height) {
  width_ = width;
  height_ = height;
  dimension_ = width_  * height_;
  grid_.addelements(dimension_);
  for (int i = 0; i < dimension_; i++) {
    downWall_.push_back(true);
    rightWall_.push_back(true);
  }
  int count = 1;
  while (count < dimension_ - 1) {
    int x = rand() % width_;
    int y = rand() % height_;
    int wallDir = rand() % 2;
    if (wallDir == 0 && x < width_ - 1) {
      if (rightWall_[x + y * width_] != false) {
        if(grid_.find(x + y * width_) != grid_.find(x + 1 + y * width_)) {
          grid_.setunion(x + y * width_, x + 1 + y * width_);
          setWall(x, y, wallDir, false);
          count++;
        }
      }
    } else if (wallDir == 1 && y < height_ - 1) {
      if (downWall_[x + y * width_] != false) {
        if(grid_.find(x + y * width_) != grid_.find(x + (y + 1) * width_)){
          grid_.setunion(x + y * width_, x + (y + 1) * width_);
          setWall(x, y, wallDir, false);
          count++;
        }
      }
    }
  }
}

bool SquareMaze::canTravel(int x, int y , int dir) const {

  if (dir == 0) {
    return !(rightWall_[width_ * y + x]);
  }

  if (dir == 1) {
    return !(downWall_[width_ * y + x]);
  }

  if (dir == 2) {
    if(x == 0) {
      return false;
    } else {
      return !(rightWall_[width_ * y + (x - 1)]);
    }
  }

  if (dir == 3) {
    if (y == 0) {
      return false;
    } else {
      return !(downWall_[width_ * (y - 1) + x]);
    }
  }
  return false;
}


void SquareMaze::setWall(int x, int y, int dir, bool exists) {
  if (x >= width_ || y >= height_) {
    return;
  }
  if (dir == 0) {
    rightWall_[x + y * width_] = exists;
  }
  if (dir == 1) {
    downWall_[x + y * width_] = exists;
  }
}

std::vector< int > SquareMaze::solveMaze() {
  std::vector<int> map;
  map.push_back(1);
  map.push_back(1);
  map.push_back(-1);
  map.push_back(-1);
  visited_.resize(width_, std::vector<bool>(height_, false));
  while (position_.empty() == false) {
    position_.pop();
  }
  position_.push(std::pair<int, int>(0, 0));
  visited_[0][0] = true;

  while(position_.empty() == false) {
    std::pair<int, int> position = position_.front();
    position_.pop();
    int x = position.first;
    int y = position.second;
    int maze_pos = (y * width_) + x;
    if (y == height_ - 1) {
      _lastRow.push_back(maze_pos);
    }

      if (canTravel(x, y, 0)) {
          if (!visited_[x+map[0]][y] && x < width_) {
            _path.insert(std::pair<int, int> (maze_pos + (map[0] * 1), maze_pos));
            visited_[x+map[0]][y] = true;
            position_.push(std::pair<int, int>(x+map[0], y));
          }
      }

      if (canTravel(x, y, 1)) {
          if (!visited_[x][y+map[1]] && y < height_) {
            _path.insert(std::pair<int, int> (maze_pos + (map[1] * width_), maze_pos));
            visited_[x][y+map[1]] = true;
            position_.push(std::pair<int, int>(x, y+map[1]));
          }
        }

      if (canTravel(x, y, 2)) {
          if (!visited_[x+map[2]][y] && x < width_) {
            _path.insert(std::pair<int, int> (maze_pos + (map[2] * 1), maze_pos));
            visited_[x+map[2]][y] = true;
            position_.push(std::pair<int, int>(x+map[2], y));
          }
      }

      if (canTravel(x, y, 3)) {
          if (!visited_[x][y+map[3]] && y < height_) {
            _path.insert(std::pair<int, int> (maze_pos + (map[3] * width_), maze_pos));
            visited_[x][y+map[3]] = true;
            position_.push(std::pair<int, int>(x, y+map[3]));
          }
        }
  }
  if (!dirs_.empty()) {
    dirs_.clear();
  }
  int last = width_ - 1;
  while(_lastRow[last] == _lastRow[last - 1]) {
    last -= 1;
  }
  int dist_from_start = _lastRow[last];
  while (dist_from_start != 0) {
    int prev = _path[dist_from_start];
    if (dist_from_start - prev == 1) {
      dirs_.push_back(0);
    }
    else if (dist_from_start - prev == -1) {
      dirs_.push_back(2);
    }
    else if (dist_from_start - prev == width_) {
      dirs_.push_back(1);
    }
    else if (dist_from_start - prev == width_ * -1) {
      dirs_.push_back(3);
    }
    dist_from_start = prev;
  }
  reverse(dirs_.begin(), dirs_.end());
  return dirs_;
}


PNG * SquareMaze::drawMaze()	const {
  int nW = (width_ * 10) + 1;
  int nH = (height_ * 10) + 1;
  PNG* currUnsolved = new PNG(nW, nH);

  for (int i = 10; i < nW; i++) {
    HSLAPixel & temp = currUnsolved->getPixel(i , 0);
    temp.l = 0.0;
  }

  for (int i = 0; i < nH; i ++) {
    HSLAPixel & temp = currUnsolved->getPixel(0 , i);
    temp.l = 0.0;
  }

  for (int x = 0; x < width_; x++) {
    for (int y = 0; y < height_; y++) {
      if (rightWall_[width_ * y + x] != false) {
        for (int i = 0; i < 11; i++) {
          HSLAPixel & temp = currUnsolved->getPixel(10 * (x + 1) , 10 * y + i);
          temp.l = 0.0;
        }
      }
      if (downWall_[width_ * y + x] == true) {
        for (int i = 0; i <= 10; i++) {
          HSLAPixel & temp = currUnsolved->getPixel(10 * x + i , 10 * (y + 1));
          temp.l = 0.0;
        }
      }
    }
  }
  return currUnsolved;
}


PNG * SquareMaze::drawMazeWithSolution() {
  std::vector<std::pair<int, int>> map;
  map.push_back(std::pair<int, int>(1, 10));
  map.push_back(std::pair<int, int>(1, 10));
  map.push_back(std::pair<int, int>(-1, -10));
  map.push_back(std::pair<int, int>(-1, -10));
  int xPixel = 5;
  int yPixel = 5;

          PNG* currUnsolved = drawMaze();
          std::vector<int> temp = solveMaze();

          for (unsigned i = 0; i < temp.size(); i++) {
            if (temp[i] == 0) {
              for (unsigned x = 0; x <= 10; x++) {
                HSLAPixel & temp = currUnsolved->getPixel(xPixel + x , yPixel);
                colorRed(temp);
              }
              xPixel = xPixel + 10;
            }
            if (temp[i] == 1) {
              for (unsigned x = 0; x <= 10; x++) {
                HSLAPixel & temp = currUnsolved->getPixel(xPixel , yPixel + x);
                colorRed(temp);
              }
              yPixel = yPixel + 10;
            }
            if (temp[i] == 2) {
              for (unsigned x = 0; x <= 10; x++) {
                HSLAPixel & temp = currUnsolved->getPixel(xPixel - x, yPixel);
                colorRed(temp);
              }
              xPixel = xPixel - 10;
          }
          if (temp[i] == 3) {
            for (unsigned x = 0; x <= 10; x++) {
              HSLAPixel & temp = currUnsolved->getPixel(xPixel , yPixel - x);
              colorRed(temp);
            }
            yPixel = yPixel - 10;
          }
        }

        for (unsigned x = 1; x <= 9; x++) {
          HSLAPixel & temp = currUnsolved->getPixel(xPixel - 5 + x, yPixel + 5);
          colorBlack(temp);
        }
        return currUnsolved;
}

void SquareMaze::colorBlack(HSLAPixel &pixel) const {
  pixel.h = 0;
  pixel.s = 0;
  pixel.l = 1.0;
  pixel.a = 1.0;
}

void SquareMaze::colorRed(HSLAPixel &pixel) const {
  pixel.h = 0;
  pixel.s = 1.0;
  pixel.l = 0.5;
  pixel.a = 1.0;
}

void SquareMaze::colorPixel(HSLAPixel &pixel, float color) const {
  pixel.h = color;
  pixel.s = 0.7;
  pixel.l = 0.5;
  pixel.a = 1.0;
}
