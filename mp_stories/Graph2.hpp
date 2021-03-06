#include <queue>
#include <algorithm>
#include <string>
#include <list>

/**
 * Returns an std::list of vertex keys that creates any shortest path between `start` and `end`.
 *
 * This list MUST include the key of the `start` vertex as the first vertex in the list, the key of
 * the `end` vertex as the last element in the list, and an ordered list of all vertices that must
 * be traveled along the shortest path.
 *
 * For example, the path a -> c -> e returns a list with three elements: "a", "c", "e".
 *
 * You should use undirected edges. Hint: There are no edge weights in the Graph.
 *
 * @param start The key for the starting vertex.
 * @param end   The key for the ending vertex.
 */
template <class V, class E>
std::list<std::string> Graph<V,E>::shortestPath(const std::string start, const std::string end) {
  // TODO: Part 3
  unordered_map<string, string> parent;
	unordered_map<string, int> distances;

	for (pair<string, V &> elem: vertexMap) {
    auto hold = elem.first;
    int infinite = INT_MAX;
		parent.insert(pair<string, string>(hold, ""));
		distances.insert(pair<string, int>(hold, infinite));
	}

	queue<string> q;
	q.push(start);
	distances[start] = 0;


	while (!(q.size()==0)) {
		string cur = q.front();
		q.pop();
		for (E_byRef ebr: incidentEdges(cur)) {
      string cur_next;
      if(ebr.get().dest().key() != cur) {
        cur_next =  ebr.get().dest().key();
      } else {
        cur_next = ebr.get().source().key();
      }
			if ((distances[cur] + 1) < distances[cur_next]) {
				q.push(cur_next);
				parent[cur_next] = cur;
				distances[cur_next] = distances[cur] + 1;
			}
		}
	}
  	list<string> path;
  	string cur = end;
    bool done = false;
  	while (done == false) {
      if(cur==start) {
        done = true;
      }
  		path.push_front(cur);
  		cur = parent[cur];
  	}
  	return path;
}
