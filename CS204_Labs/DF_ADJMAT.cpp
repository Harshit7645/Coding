#include <iostream>
#include <list>
using namespace std;

class Graph {
  int numVertices;
  list<int> *adjLists;
  bool *visited;

   public:
  Graph(int V);
  void addEdge(int src, int dest);
  void DFS(int vertex);
};
Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new list<int>[vertices];
  visited = new bool[vertices];
}
void Graph::addEdge(int src, int dest) {
  adjLists[src].push_front(dest);
}
void Graph::DFS(int vertex) {
  visited[vertex] = true;
  list<int> adjList = adjLists[vertex];

  cout << vertex << " ";

  list<int>::iterator i;
  for (i = adjList.begin(); i != adjList.end(); ++i)
    if (!visited[*i])
      DFS(*i);
}

int main() {
    int n,i,j;
    cin>>n;
    int arr[n][n];
  Graph g(n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
  }
for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
        if(arr[i][j]==1)
        g.addEdge(i,j);
    }
  }

  g.DFS(0);

  return 0;
}