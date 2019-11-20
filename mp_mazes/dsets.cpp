#include "dsets.h"
#include <iostream>

using namespace std;

void DisjointSets::addelements(int num) {
  for (int i = 0; i < num; i++) {
    _elems.push_back(-1);
  }
}

int DisjointSets::find(int elem) {

  while (_elems[elem] >= 0) {
    elem = _elems[elem];
  }

  return elem;
}

void DisjointSets::setunion(int a, int b) {
  int a_set = find(a);
  int b_set = find(b);
  int temp;
  if (_elems[a_set] <= _elems[b_set]) {
    temp = _elems[b_set];
    _elems[b_set] = a_set;
    _elems[a_set] += temp;
  } else {
    temp = _elems[a_set];
    _elems[a_set] = b_set;
    _elems[b_set] += temp;
  }
}

int DisjointSets::size(int elem) {
  elem = find(elem);
  return _elems[elem] * (-1);
}
