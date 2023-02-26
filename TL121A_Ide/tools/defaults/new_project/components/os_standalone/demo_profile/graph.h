#ifndef GRAPH_H
#define GRAPH_H

#include <list>
#include <vector>

using std::list;
using std::vector;

#include "position.h"

struct Vertex;
struct Edge;
struct Graph;

struct Vertex
{
    Position* pos;
#ifdef USE_EDGE_VECTOR
    vector<Edge*> edges;
#else
    list<Edge*> edges;
#endif
    int color;

    ~Vertex() { delete pos; }
    friend ostream& operator<<(ostream& o, Vertex& v);
};

struct Edge
{
    Vertex *left;
    Vertex *right;
    int cost;
    int color;

    inline void calculateCost() {cost = left->pos->distance(right->pos);}
    inline bool shouldPrune() {
	return (!color || !left->color || !right->color);
    }
    
    friend ostream& operator<<(ostream& o, Edge& e);
};

struct Graph
{    
    vector<Vertex> vertices;
    int num_vertices;
#ifdef USE_EDGE_VECTOR
    vector<Edge*> edges;
#else
    list<Edge*> edges;
#endif

    Graph(int size, const void *data, PosInit initfunc) {
	initializeVertices(size, data, initfunc);
    }
    void initializeVertices(int size, const void *&data, PosInit initfunc);
    void calculateEdges();
    void calculateEdgeCosts();
    void resetColors();
    void remapVertColor(int source, int dest);
    void pruneEdges();
    
    friend ostream& operator<<(ostream& o, Graph& g);
};

#ifdef USE_EDGE_VECTOR
typedef vector<Edge*>::iterator EdgeIterator;
#else
typedef list<Edge*>::iterator EdgeIterator;
#endif
typedef vector<Vertex>::iterator VertexIterator;

#endif /* GRAPH_H */

    
