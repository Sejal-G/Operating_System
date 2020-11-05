#include<iostream>
#include <list>
#include <limits.h>

using namespace std;

class Graph
{
	int V;
	list<int> *adj;
	bool isCyclicUtil(int v, bool visited[], bool *rs);
public:

	Graph(int V){
	this->V = V;
	adj = new list<int>[V];}
	void addEdge(int v, int w){
	adj[v].push_back(w);
}

	bool isCyclic(){
	bool *visited = new bool[V];
	bool *recStack = new bool[V];
	for(int i = 0; i < V; i++)
	{
		visited[i] = false;
		recStack[i] = false;
	}
	for(int i = 0; i < V; i++)
		if (isCyclicUtil(i, visited, recStack))
			return true;
	return false;}
};


bool Graph::isCyclicUtil(int v, bool visited[], bool *recStack)
{
	if(visited[v] == false)
	{
		visited[v] = true;
		recStack[v] = true;	list<int>::iterator i;
		for(i = adj[v].begin(); i != adj[v].end(); ++i)
		{
			if ( !visited[*i] && isCyclicUtil(*i, visited, recStack) )
				return true;
			else if (recStack[*i])
				return true;
		}
	}
	recStack[v] = false;
	return false;
}

int main()
{
	Graph g(7);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(2, 3);
	g.addEdge(3, 0);
	g.addEdge(3, 4);
	g.addEdge(4, 5);
	g.addEdge(5, 6);
	g.addEdge(6, 7);

	if(g.isCyclic())
		cout << "Given process resource cycle has deadlock";
	else
		cout << "Given process resource cycle doesn't have deadlock";
	return 0;
}

