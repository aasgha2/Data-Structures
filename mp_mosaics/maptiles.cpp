/**
 * @file maptiles.cpp
 * Code for the maptiles function.
 */

#include <iostream>
#include <map>
#include "maptiles.h"
//#include "cs225/RGB_HSL.h"

using namespace std;


Point<3> convertToXYZ(LUVAPixel pixel) {
    return Point<3>( pixel.l, pixel.u, pixel.v );
}

MosaicCanvas* mapTiles(SourceImage const& theSource,
                       vector<TileImage>& theTiles)
{
  vector<Point<3>> tile_colors;
  map<Point<3>, TileImage*> color_to_tile;

  for (unsigned int i = 0; i < theTiles.size(); i++) {
    LUVAPixel color = theTiles[i].getAverageColor();
    color_to_tile[convertToXYZ(color)] = &theTiles[i];
    tile_colors.push_back(convertToXYZ(color));
  }

  KDTree<3> color_tree(tile_colors);
  int rows = theSource.getRows();
  int columns = theSource.getColumns();

  MosaicCanvas *canvas = new MosaicCanvas(rows, columns);

  for (int x = 0; x < rows; x++) {
      for (int y = 0; y < columns; y++) {
          LUVAPixel sc = theSource.getRegionColor(x, y);
          TileImage* tile = color_to_tile[color_tree.findNearestNeighbor(convertToXYZ(sc))];
          canvas->setTile(x, y, tile);
      }
  }

  return canvas;
}
