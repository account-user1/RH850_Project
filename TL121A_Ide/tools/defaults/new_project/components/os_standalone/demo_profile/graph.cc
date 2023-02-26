#include <iostream>

using namespace std;

#include "graph.h"

void Graph::initializeVertices(int size, const void *&data, PosInit initfunc) {
    num_vertices = size;
    vertices.resize(size);
    for (int i=0; i<size; i++)
	vertices[i].pos = initfunc(data, i);
}

void Graph::calculateEdges() {
    int i, j;
    for (i=1; i<num_vertices; i++)
	for (j=0; j<i; j++)
	    if (vertices[i].pos->connected(vertices[j].pos)) {
		Edge *edge = new Edge();
		edge->left = &vertices[i];
		edge->right = &vertices[j];
		edges.push_back(edge);
		edge->left->edges.push_back(edge);
		edge->right->edges.push_back(edge);
	    }
}

void Graph::calculateEdgeCosts() {
    for (EdgeIterator e = edges.begin(); e!=edges.end(); e++)
	(*e)->calculateCost();
}

void Graph::resetColors() {
    for (int i=0; i<num_vertices; i++)
	vertices[i].color = 0;
    for (EdgeIterator e = edges.begin(); e!=edges.end(); e++)
	(*e)->color = 0;
}

void Graph::remapVertColor(int source, int dest) {
    for (int i=0; i<num_vertices; i++)
	if (vertices[i].color == source)
	    vertices[i].color = dest;
}

void Graph::pruneEdges() {
    for (EdgeIterator e = edges.begin(); e!=edges.end(); e++)
	if ((*e)->shouldPrune())
	    e = --edges.erase(e);
}


ostream& operator<<(ostream& o, Vertex& v) {
    o << *v.pos << " " << v.color;
    return o;
}

ostream& operator<<(ostream& o, Edge& e) {\
    o << "[" << *(e.left->pos) << "-" << *(e.right->pos);
    o << " " << e.cost << " " << e.color << "]";
    return o;
}

ostream& operator<<(ostream& o, Graph& g) {
    o << "[" << g.vertices[0];
    for (int i=1; i<g.num_vertices; i++)
	o << ", " << g.vertices[i];
    o << "]"<< endl;

    for (EdgeIterator e = g.edges.begin(); e!=g.edges.end(); e++)
	o << **e << endl;
    o << endl;
    return o;
}

