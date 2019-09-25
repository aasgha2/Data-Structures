#include <iostream>
#include <cmath>


#include "cs225/PNG.h"
#include "Image.h"


using cs225::PNG;
using cs225::HSLAPixel;

  void Image::lighten () {
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
         HSLAPixel & pixel = this->getPixel(x, y);
         if (pixel.l > 0.9) {
           pixel.l = 1.0;
         } else {
           pixel.l += 0.1;
         }
      }
    }
  }

  void Image::lighten(double amount){
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
        HSLAPixel & pixel = this->getPixel(x, y);
        if (pixel.l == 1.0 || (pixel.l + amount) > 1.0) {
          pixel.l = 1;
        } else {
          pixel.l += amount;
        }
      }
    }
  }

  void Image::darken() {
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
        HSLAPixel & pixel = this->getPixel(x, y);
        if (pixel.l < 0.1) {
          pixel.l = 0.0;
        } else {
          pixel.l -= 0.1;
      }
    }
  }
}


  void Image::darken(double amount) {
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
        HSLAPixel & pixel = this->getPixel(x, y);
        if (pixel.l == 0.0 || (pixel.l - amount) < 0.0) {
          pixel.l = 0.0;
        } else {
          pixel.l -= amount;
      }
    }
  }
}

  void Image::saturate() {
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
        HSLAPixel & pixel = this->getPixel(x, y);
        if (pixel.s == 1.0) {
          pixel.s = 1.0;
        } else {
          pixel.s += 0.1;
      }
    }
  }
}

  void Image::saturate(double amount) {
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
        HSLAPixel & pixel = this->getPixel(x, y);
        if (pixel.s == 1.0 || (pixel.s + amount) > 1.0) {
          pixel.s = 1.0;
        } else {
          pixel.s += amount;
      }
    }
  }
}

  void Image::desaturate() {
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
        HSLAPixel & pixel = this->getPixel(x, y);
        if (pixel.s == 0.0) {
          pixel.s = 0.0;
        } else {
          pixel.s -= 0.1;
      }
    }
  }
}

  void Image::desturate(double amount) {
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
        HSLAPixel & pixel = this->getPixel(x, y);
        if (pixel.s == 0.0 || (pixel.s - amount) < 0.0) {
          pixel.s = 0.0;
        } else {
          pixel.s -= amount;
      }
    }
  }
}

  void Image::grayscale() {
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
        HSLAPixel & pixel = this->getPixel(x, y);
        pixel.s = 0.0;
    }
  }
}

  void Image::rotateColor(double degrees){
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
        HSLAPixel & pixel = this->getPixel(x, y);
        pixel.h += degrees;
        while (pixel.h > 360) {
          pixel.h -= 360;
        }
        while (pixel.h < 0) {
          pixel.h += 360;
        }
      }
    }
  }

  void Image::illinify() {
    for (unsigned x = 0; x < this->width(); x++) {
        for (unsigned y = 0; y < this->height(); y++) {
          HSLAPixel & pixel = this->getPixel(x,y);
          if (pixel.h > 293 || pixel.h <= 113) {
            pixel.h = 11;
          } else {
            pixel.h = 216;
          }
        }
      }
    }

  void Image::scale(double factor) {
    PNG* newImage = new PNG(*this);
    this->resize(this->width()*factor, this->height()*factor);
    for (unsigned x = 0; x < this->width(); x++) {
      for (unsigned y = 0; y < this->height(); y++) {
        HSLAPixel & pixel = this->getPixel(x, y);
        HSLAPixel & scaledPixel = newImage->getPixel(x/factor, y/factor);
        pixel = scaledPixel;
      }
    }
  }

  void Image::scale(unsigned w, unsigned h) {
    double widthR = (w*1.0)/(this->width() * 1.0);
    double heightR = (h*1.0)/(this->height() * 1.0);
    if (((widthR < heightR))) {
      scale(widthR);
    } else {
      scale (heightR);
    }
  }
