#include "../cs225/catch/catch.hpp"

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

#include "../cs225/PNG.h"
#include "../cs225/HSLAPixel.h"

#include "../imageTraversal/BFS.h"
#include "../imageTraversal/DFS.h"

using namespace cs225;



TEST_CASE("DFS maintains the deepest point on top", "[weight=0][part=1][part=1a]") {
  PNG png(40, 40);
  Point startPoint(20, 20);
  DFS dfs(png, startPoint, 0.2);

  dfs.add( Point(2, 2) );
  dfs.add( Point(2, 3) );
  dfs.add( Point(2, 4) );

  REQUIRE( dfs.peek() == Point(2, 4) );
}

TEST_CASE("DFS maintains a depth-first ordering", "[weight=0][part=1][part=1a]") {
  PNG png(40, 40);
  std::cout << "hi this is debug" << std::endl;
  Point startPoint(20, 20);
  std::cout << "hi this is debug2" << std::endl;

  DFS dfs(png, startPoint, 0.2);

  dfs.add( Point(2, 2) );
  std::cout << "hi this is debug3" << std::endl;

  dfs.add( Point(2, 3) );
  std::cout << "hi this is debug4" << std::endl;

  dfs.add( Point(2, 4) );
  std::cout << "hi this is debug5" << std::endl;


  REQUIRE( dfs.pop() == Point(2, 4) );
  std::cout << "hi this is debug5" << std::endl;

  REQUIRE( dfs.pop() == Point(2, 3) );
  std::cout << "hi this is debug5" << std::endl;

  REQUIRE( dfs.pop() == Point(2, 2) );
  std::cout << "hi this is debug6" << std::endl;

  std::cout << dfs.empty() << std::endl;

  REQUIRE( dfs.pop() == Point(20, 20) );
  std::cout << "hi this is debug7" << std::endl;

}

TEST_CASE("BFS maintains the correct point on top", "[weight=0][part=1][part=1b]") {
  PNG png(40, 40);
  Point startPoint(20, 20);
  BFS bfs(png, startPoint, 0.2);

  bfs.add( Point(2, 2) );
  bfs.add( Point(2, 3) );
  bfs.add( Point(2, 4) );

  REQUIRE( bfs.peek() == Point(20, 20) );
}

TEST_CASE("BFS maintains the BFS ordering", "[weight=0][part=1][part=1b]") {
  PNG png(40, 40);
  Point startPoint(20, 20);
  BFS bfs(png, startPoint, 0.2);

  bfs.add( Point(2, 2) );
  bfs.add( Point(2, 3) );
  bfs.add( Point(2, 4) );

  REQUIRE( bfs.pop() == Point(20, 20) );
  REQUIRE( bfs.pop() == Point(2, 2) );
  REQUIRE( bfs.pop() == Point(2, 3) );
  REQUIRE( bfs.pop() == Point(2, 4) );
}
