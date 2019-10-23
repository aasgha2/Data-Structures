#include <iterator>
#include <cmath>

#include <list>
#include <queue>
#include <stack>
#include <vector>

#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"
#include "BFS.h"

using namespace cs225;

/**
 * Initializes a breadth-first ImageTraversal on a given `png` image,
 * starting at `start`, and with a given `tolerance`.
 * @param png The image this BFS is going to traverse
 * @param start The start point of this BFS
 * @param tolerance If the current point is too different (difference larger than tolerance) with the start point,
 * it will not be included in this BFS
 */
BFS::BFS(const PNG & png, const Point & start, double tolerance) {
  /** @todo [Part 1] */
  image_ = png;
  start_ = start;
  tolerance_ = tolerance;
  add(start_);
}

/**
 * Returns an iterator for the traversal starting at the first point.
 */
 //ERROR MIGHT COME FROM HERE! MAKE SURE TO CHECK
ImageTraversal::Iterator BFS::begin() {
  /** @todo [Part 1] */
  //return ImageTraversal::Iterator(this);
  BFS* bfs = new BFS(image_, start_, tolerance_);
  ImageTraversal::Iterator it = ImageTraversal::Iterator(bfs);
  return it;

}

/**
 * Returns an iterator for the traversal one past the end of the traversal.
 */
ImageTraversal::Iterator BFS::end() {
  /** @todo [Part 1] */
  return ImageTraversal::Iterator();
}

/**
 * Adds a Point for the traversal to visit at some point in the future.
 */
void BFS::add(const Point & point) {
  /** @todo [Part 1] */
  queue_.push(point);
}

/**
 * Removes and returns the current Point in the traversal.
 */
Point BFS::pop() {
  /** @todo [Part 1] */
  Point temp = queue_.front();
  queue_.pop();
  return temp;
}

/**
 * Returns the current Point in the traversal.
 */
Point BFS::peek() const {
  /** @todo [Part 1] */
  return queue_.front();
}

/**
 * Returns true if the traversal is empty.
 */
bool BFS::empty() const {
  /** @todo [Part 1] */
  if (queue_.empty()) {
    return true;
  } else {
    return false;
  }
}


PNG BFS::getImage(){
  return image_;
}

double BFS::getTolerance(){
  return tolerance_;
}

Point BFS::getStart(){
  return start_;
}
