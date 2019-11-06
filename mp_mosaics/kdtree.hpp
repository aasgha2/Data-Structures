/**
 * @file kdtree.cpp
 * Implementation of KDTree class.
 */

#include <utility>
#include <algorithm>

using namespace std;

template <int Dim>
bool KDTree<Dim>::smallerDimVal(const Point<Dim>& first,
                                const Point<Dim>& second, int curDim) const
{
    /**
     * @todo Implement this function!
     */
     if (first[curDim] == second[curDim]) {
       return first < second;
     } else if (first[curDim] < second[curDim]) {
       return true;
     }
     else {
       return false;
     }
}

template <int Dim>
bool KDTree<Dim>::shouldReplace(const Point<Dim>& target,
                                const Point<Dim>& currentBest,
                                const Point<Dim>& potential) const
{
    /**
     * @todo Implement this function!
     */
     int currentD = 0;
     int potentialD = 0;
     for (int i = 0; i < Dim; i++) {
       potentialD = potentialD + pow((target[i] - potential[i]), 2);
       currentD = currentD + pow((target[i] - currentBest[i]), 2);
     }

     if (potentialD != currentD) {
       return potentialD < currentD;
     }

     return potential < currentBest;
}

template <int Dim>
KDTree<Dim>::KDTree(const vector<Point<Dim>>& newPoints)
{
    /**
     * @todo Implement this function!
     */
     count = 0;
     root = NULL;
     if (newPoints.size() == 0) {
       return;
     }
     points = newPoints;

     if(!(newPoints.size() == 0)) {
       constructor(0, points.size()-1, 0, root);
     }

}
template <int Dim>
void KDTree<Dim>::constructor(int s, int e, int d, KDTreeNode *&subroot)
{
  Point<Dim> medianPoint = quickSelectSort(s, e, ((s + e) / 2), d);
  subroot = new KDTreeNode(medianPoint);
  if (s == e) {
    return;
  }
  if (e - s != 1) {
    constructor(s, ((s + e) / 2) - 1, (d + 1) % Dim, subroot->left);
  }
  constructor(((s + e) / 2) + 1, e, (d + 1) % Dim, subroot->right);
}


template <int Dim>
Point<Dim> KDTree<Dim>::quickSelectSort(int s, int e, int k, int d)
{
  if (s == e) {
    return points[s];
  }
  int pivotIndex = partition(s, e, ((s+e)/2), d);
  if (k > pivotIndex) {
    return quickSelectSort(pivotIndex+1, e, k, d);
  }
  else if (k < pivotIndex) {
    return quickSelectSort(s, pivotIndex-1, k, d);
  } else {
    return points[pivotIndex];
  }
}

template <int Dim>
int KDTree<Dim>::partition(int s, int e, int k, int d)
{
  Point<Dim> start = points[s];
  swap(points[s], points[e]);
  int sIndex = s;
  for(int j = s; j < e; j++) {
    if (smallerDimVal(points[j], start, d)) {
      swap(points[sIndex], points[j]);
      sIndex++;
    }
  }

  swap(points[sIndex], points[e]);
  return sIndex;
}


template <int Dim>
KDTree<Dim>::KDTree(const KDTree<Dim>& other) {
  /**
   * @todo Implement this function!
   */
}

template <int Dim>
const KDTree<Dim>& KDTree<Dim>::operator=(const KDTree<Dim>& rhs) {
  /**
   * @todo Implement this function!
   */

  return *this;
}

template <int Dim>
KDTree<Dim>::~KDTree() {
  /**
   * @todo Implement this function!
   */
   destructor(root);
}

template <int Dim>
Point<Dim> KDTree<Dim>::findNearestNeighbor(const Point<Dim>& query) const
{
    /**
     * @todo Implement this function!
     */

     int nearest = findNearestHelper(query, 0, 0, points.size() - 1);
     return points[nearest];
}


template <int Dim>
int KDTree<Dim>::findNearestHelper(const Point<Dim>& q, int dim, int l, int r) const
{
    if (l >= r)
        return l;

    int mid = (r + l) / 2;
    int nearest = 0;
    int other = 0;


    if (!smallerDimVal(q, points[mid], dim)) {
        nearest = findNearestHelper(q, (dim + 1) % Dim, mid + 1, r);
    } else {
        nearest = findNearestHelper(q, (dim + 1) % Dim, l, mid - 1);
    }

    if (shouldReplace(q, points[nearest], points[mid])) {
        nearest = mid;
      }

    double rad = dist(q, points[nearest]);
    double spl = (points[mid][dim] - q[dim]);
    spl = spl * spl;

    if (rad >= spl) {
        if (!smallerDimVal(q, points[mid], dim)) {
            other = findNearestHelper(q, (dim + 1) % Dim, l, mid - 1);
        } else {
          other = findNearestHelper(q, (dim + 1) % Dim, mid + 1, r);
        }
        if (shouldReplace(q, points[nearest], points[other]))
            nearest = other;
    }
    return nearest;
}

template <int Dim>
double KDTree<Dim>::dist(const Point<Dim>& f,
                                    const Point<Dim>& s) const
{
    double dist = 0;
    for (int i = 0; i < Dim; i++)
        dist = dist + pow(f[i] - s[i], 2);
    return dist;
}

template <int Dim>
void KDTree<Dim>::destructor(KDTreeNode *&subroot) {
  if (subroot == NULL) {
    return;
  }

  if (subroot->left == NULL && subroot->right == NULL) {
    delete subroot;
    return;
  }

  destructor(subroot->right);
  destructor(subroot->left);
  delete subroot;
}
