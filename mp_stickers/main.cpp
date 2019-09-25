#include "Image.h"
#include "StickerSheet.h"

int main() {


  Image background;   background.readFromFile("stickers_and_images/background.png");
  Image lightning;    lightning.readFromFile("stickers_and_images/lightning.png");
  Image logo;  logo.readFromFile("stickers_and_images/PortfolioLogo.png");
  Image rush;      rush.readFromFile("stickers_and_images/RushShirt_Back3.png");

  logo.scale(5);
  lightning.scale(2);
  StickerSheet sheet(background, 5);
  sheet.addSticker(lightning, 700, 500);
  sheet.addSticker(logo, 1500, 250);
  sheet.addSticker(rush, 0, 0);

  sheet.render().writeToFile("myImage.png");
  sheet.render().writeToFile("stickers_and_images/myImage.png");
  return 0;
}
