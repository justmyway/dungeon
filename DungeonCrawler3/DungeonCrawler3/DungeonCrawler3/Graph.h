#pragma once
#include <list>

#include "Vertex.h"

class Vertex;

class Graph
{
public:
	Graph();
	~Graph();
	std::list<Vertex>* Vertices() const;
	void Add(Vertex vertex) const;

private:
	std::list<Vertex>* vertices;

};