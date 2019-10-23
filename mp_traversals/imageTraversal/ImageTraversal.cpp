#include <cmath>
#include <iterator>
#include <iostream>

#include "../cs225/HSLAPixel.h"
#include "../cs225/PNG.h"
#include "../Point.h"

#include "ImageTraversal.h"

using namespace std;

/**
 * Calculates a metric for the difference between two pixels, used to
 * calculate if a pixel is within a tolerance.
 *
 * @param p1 First pixel
 * @param p2 Second pixel
 * @return the difference between two HSLAPixels
 */
double ImageTraversal::calculateDelta(const HSLAPixel & p1, const HSLAPixel & p2) {
  double h = fabs(p1.h - p2.h);
  double s = p1.s - p2.s;
  double l = p1.l - p2.l;

  // Handle the case where we found the bigger angle between two hues:
  if (h > 180) { h = 360 - h; }
  h /= 360;

  return sqrt( (h*h) + (s*s) + (l*l) );
}

/**
 * Default iterator constructor.
 */
ImageTraversal::Iterator::Iterator() {
  traversal_ = NULL;
}

ImageTraversal::Iterator::Iterator(ImageTraversal *traversal) {
  traversal_ = traversal;
  start_ = traversal_->getStart();
  image_ = traversal_->getImage();
  width_ = image_.width();
  height_ = image_.height();
  tolerance_ = traversal_->getTolerance();
  visited_ = new bool*[width_];
  for (int i = 0; i < width_; i++) {
    visited_[i] = new bool[height_];
  }
  for (int i = 0; i < width_; i++) {
    for (int j = 0; j < height_; j++) {
      visited_[i][j] = 0;
    }
  }

  startPoint = image_.getPixel(start_.x,start_.y);

}

/**
 * Iterator increment opreator.
 *
 * Advances the traversal of the image.
 */
ImageTraversal::Iterator & ImageTraversal::Iterator::operator++() {

    Point curr = traversal_->pop();
    int currentX = curr.x;
    int currentY = curr.y;
    visited_[currentX][currentY] = true;

    if(currentX+1 < width_ && !visited_[currentX+1][currentY] && calculateDelta(startPoint, image_.getPixel(currentX + 1,currentY)) <= tolerance_) {
          Point* p = new Point(currentX+1, currentY);
          traversal_->add(*p);
        }

    if(currentY+1 < height_ && !visited_[currentX][currentY+1] && calculateDelta(startPoint, image_.getPixel(currentX,currentY+1)) <= tolerance_) {
          Point* p = new Point(currentX, currentY+1);
          traversal_->add(*p);
        }

    if(currentX-1 >= 0 && !visited_[currentX-1][currentY] && calculateDelta(startPoint, image_.getPixel(currentX-1,currentY)) <= tolerance_) {
          Point* p = new Point(currentX-1, currentY);
          traversal_->add(*p);
        }

    if(currentY-1 >= 0 && !visited_[currentX][currentY-1] && calculateDelta(startPoint, image_.getPixel(currentX,currentY-1)) <= tolerance_) {
          Point* p = new Point(currentX, currentY-1);
          traversal_->add(*p);
      }

    Point next = traversal_->peek();
    while(visited_[next.x][next.y] && traversal_->empty() == false){
      next = traversal_->pop();
      if(traversal_->empty() == false){
        next = traversal_->peek();
      }
    }
    return *this;

}

/**
 * Iterator accessor opreator.
 *
 * Accesses the current Point in the ImageTraversal.
 */
Point ImageTraversal::Iterator::operator*() {
  /** @todo [Part 1] */
  return traversal_->peek();
}

/**
 * Iterator inequality operator.
 *
 * Determines if two iterators are not equal.
 */
bool ImageTraversal::Iterator::operator!=(const ImageTraversal::Iterator &other) {
  /** @todo [Part 1] */
  if(traversal_->empty()) {
    return false;
  } else {
    return true;
  }
}
