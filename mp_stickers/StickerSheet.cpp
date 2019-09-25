#include "StickerSheet.h"

StickerSheet::StickerSheet(const Image &picture, unsigned max) {
  count_ = 0;
  stickers_ = new Image*[max];
  xPos_ = new unsigned[max];
  yPos_ = new unsigned[max];
  max_ = max;
  picture_ = picture;
}

StickerSheet::~StickerSheet() {
  delete[] stickers_;
  delete[] xPos_;
  delete[] yPos_;
  stickers_ = NULL;
  xPos_ = NULL;
  yPos_ = NULL;
}

StickerSheet::StickerSheet(const StickerSheet &other) {
  copy(other);
}

const StickerSheet& StickerSheet::operator=(const StickerSheet &other) {
  if (this != &other) {
    delete[] stickers_;
    delete[] xPos_;
    delete[] yPos_;
    stickers_ = NULL;
    xPos_ = NULL;
    yPos_ = NULL;
    copy(other);
  }
  return *this;
}

void StickerSheet::copy(const StickerSheet &other) {
  this->count_ = other.count_;
  this->max_ = other.max_;
  this->picture_ = other.picture_;
  stickers_ = new Image*[max_];
  xPos_ = new unsigned[max_];
  yPos_ = new unsigned[max_];
  for (unsigned i = 0; i < count_; i++) {
    this->stickers_[i] = other.stickers_[i];
    this->xPos_[i] = other.xPos_[i];
    this->yPos_[i] = other.yPos_[i];
  }
}

void StickerSheet::changeMaxStickers(unsigned max) {
  if(max_ == max) {
    return;
  }
  if (max_ > max) {
    for(unsigned i = max; i < max_; i++){
      removeSticker(i);
    }
  } else {
  Image* *newStickers = new Image*[max];
  unsigned *newX = new unsigned[max];
  unsigned *newY = new unsigned[max];
  if (count_ > max) {
    count_ = max;
  }
  int c = 0;
  for (unsigned i = 0; i < max; i++) {
    newStickers[i] = this->stickers_[i];
    newX[i] = this->xPos_[i];
    newY[i] = this->yPos_[i];
    c++;
  }

  max_ = max;
  count_ = c+1;
  this->stickers_ = newStickers;
  this->xPos_ = newX;
  this->yPos_ = newY;
}
}

int StickerSheet::addSticker(Image &sticker, unsigned x, unsigned y) {
  if (count_ < max_) {
    stickers_[count_] = &sticker;
    xPos_[count_] = x;
    yPos_[count_] = y;
    count_++;
    return count_;
  }
  return -1;
}

void StickerSheet::removeSticker(unsigned index) {
  if (index < count_) {
    delete stickers_[index];
    stickers_[index] = NULL;
    xPos_ = 0;
    yPos_ = 0;
  }
}

bool StickerSheet::translate(unsigned index, unsigned x, unsigned y) {
  if (index >= count_) {
    return false;
  } else {
    xPos_[index] = x;
    yPos_[index] = y;
    return true;
}
}

Image* StickerSheet::getSticker(unsigned index) const {
  if (index < count_) {
    return stickers_[index];
  } else {
    return NULL;
  }
}

Image StickerSheet::render() const {
  Image render_image;

  unsigned pH = 0;
  unsigned pW = 0;

    if (pH < picture_.height()) {
      pH = picture_.height();
    }
    if (pW < picture_.width()) {
      pW = picture_.width();
    }

  for(unsigned i = 0; i < count_; i++) {
    if(stickers_[i] != NULL) {
      if (pH < stickers_[i]->height() + yPos_[i]) {
        pH = stickers_[i]->height() + yPos_[i];
      }
      if (pW < stickers_[i]->width() + xPos_[i]) {
        pW = stickers_[i]->width() + xPos_[i];
      }
    }
  }

  render_image.resize(pW, pH);
  for (unsigned j = 0; j < pW; j++) {
    for (unsigned k = 0; k < pH; k++) {
      if (picture_.getPixel(j, k).a != 0) {
        render_image.getPixel(j, k) = picture_.getPixel(j, k);
      }
    }
  }

  for (unsigned i = 0; i < count_; i++) {
    if (stickers_[i] != NULL) {
      for (unsigned j = 0; j < stickers_[i]->width(); j++) {
        for (unsigned k = 0; k < stickers_[i]->height(); k++) {
          if (stickers_[i]->getPixel(j, k).a != 0) {
            render_image.getPixel(xPos_[i] + j, yPos_[i] + k) = stickers_[i]->getPixel(j, k);
          }
        }
      }
    }
  }

  return render_image;
}
