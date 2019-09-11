#include "cs225/PNG.h"
#include "cs225/HSLAPixel.h"
using namespace cs225;
#include <string>


void rotate(std::string inputFile, std::string outputFile) {
  PNG* original = new PNG();

  original -> readFromFile(inputFile);
  unsigned width = original->width();
  unsigned height = original ->height();

  PNG* output = new PNG(width, height);


  for (unsigned y = 0; y < height; y++) {
    for (unsigned x = 0; x < width; x++) {
      HSLAPixel & previous = original->getPixel(x, y);
      HSLAPixel & current = output->getPixel(width - x - 1, height - y - 1);

      current = previous;

    }
  }
  output->writeToFile(outputFile);
}

cs225::PNG myArt(unsigned int width, unsigned int height) {
  cs225::PNG png(width, height);
  HSLAPixel *g = new HSLAPixel(104, 0.8, 0.5);
  HSLAPixel *r = new HSLAPixel(343, 0.8, 0.5);
  HSLAPixel *b = new HSLAPixel(0, 0, 0);

  for (unsigned x = 0; x < png.width(); x++) {
    for (unsigned y = 0; y < png.height(); y++) {
      HSLAPixel & currPixel = png.getPixel(x, y);
      if (x < (png.width()/3)) {
        currPixel = *r;
      }

      if ((x < (png.width*(2/3))) {
        currPixel = *b;
      }

      if (x >= (png.width*(2/3))) {
        currPixel = *g;
      }

    }
  }


  return png;
}
