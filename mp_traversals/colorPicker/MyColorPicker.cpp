#include "../cs225/HSLAPixel.h"
#include "../Point.h"

#include "ColorPicker.h"
#include "MyColorPicker.h"
#include <cmath>

using namespace cs225;
using namespace std;

/**
 * Picks the color for pixel (x, y).
 * Using your own algorithm
 */
HSLAPixel MyColorPicker::getColor(unsigned x, unsigned y) {
  /* @todo [Part 3] */
  double hue = (360 - 1*y/x);
  int hue2 = hue/1;
  int hue3 = abs(hue2);
  HSLAPixel pixel(hue3, 1, 0.5);
  return pixel;

}
