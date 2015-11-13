#include "stdafx.h"
#include "Graph.h"

using namespace std;

Graph::Graph()
{
	vertices = new list<Vertex>();
}

Graph::~Graph()
{
}

list<Vertex>* Graph::Vertices() const
{
	return vertices;
}

void Graph::Add(Vertex vertex) const
{
	vertices->push_back(vertex);
}
