#include <stdlib.h>
#include <iostream>

using namespace std;

#include "graph.h"
#include "dataset.h"

void minSpanningTreeKruskals(Graph &g)
{
    int cheapestCost;
    EdgeIterator edgeiter, lastedge;
    Edge *edge;
    Edge *cheapestEdge;
    bool found;
    int color;
    int nextColor = 1;

    do {
	found = false;
	cheapestCost = maxint;
	edgeiter = g.edges.begin();
	lastedge = g.edges.end();
	while (edgeiter!=lastedge) {
	    edge = *edgeiter;
	    if (!edge->color) {
		if ((!edge->left->color ||
			edge->left->color!=edge->right->color))
		    if (edge->cost<cheapestCost)
		    {
			cheapestCost = edge->cost;
			cheapestEdge = edge;
			found = true;
		    }
	    }
	    edgeiter++;
	}
	if (found) {
	    if (cheapestEdge->left->color) {
		color = cheapestEdge->left->color;
		if (cheapestEdge->right->color) {
		    if (cheapestEdge->right->color != color)
			g.remapVertColor(cheapestEdge->right->color, color);
		} else
		    cheapestEdge->right->color = color;
	    } else if (cheapestEdge->right->color) {
		cheapestEdge->left->color = cheapestEdge->right->color;
	    } else {
		cheapestEdge->right->color = nextColor;
		cheapestEdge->left->color = nextColor;
		nextColor++;
	    }
	    cheapestEdge->color = cheapestEdge->left->color;
	}
    } while (found);
}

void minSpanningTreePrims(Graph &g)
{
    int cheapestCost;
    VertexIterator vert, lastvert;
    EdgeIterator edgeiter, lastedge;
    Edge *edge;
    Edge *cheapestEdge;
    bool found;

    g.vertices.begin()->color = 1;
    do {
	found = false;
	cheapestCost = maxint;
	vert = g.vertices.begin();
	lastvert = g.vertices.end();
	while (vert!=lastvert) {
	    if (vert->color) {
		edgeiter = vert->edges.begin();
		lastedge = vert->edges.end();
		while (edgeiter!=lastedge) {
		    edge = *edgeiter;
#ifndef PRIMS_SPEEDUP
		    if (edge->left->color!=edge->right->color) {
			if (!edge->color)
			    if (edge->cost<cheapestCost) {
#else
		    if (edge->cost<cheapestCost) {
			if (edge->left->color!=edge->right->color)
			    if (!edge->color) {
#endif
				cheapestCost = edge->cost;
				cheapestEdge = edge;
				found = true;
			    }
		    }
		    edgeiter++;
		}
	    }
	    vert++;
	}
	if (found) {
	    cheapestEdge->color = 1;
	    cheapestEdge->left->color = 1;
	    cheapestEdge->right->color = 1;
	}
    } while (found);
}

static void runtest(Graph &g)
{
    g.resetColors();
    minSpanningTreeKruskals(g);
    g.resetColors();
    minSpanningTreePrims(g);
}

Graph *process_args(int argc, char **argv)
{
    if (argc<2)
	return initialize_dataset1();

    switch (atoi(argv[1])) {
	case 1:
	    return initialize_dataset1();
	case 2:
	    return initialize_dataset2();
	case 3:
	    return initialize_dataset3();
    }

    cout << "Syntax: profile [1-3]" << endl;
    return NULL;
}

/*
   Configuring this program:
   ===============================
   Depending on your target environment, you may need to change
   the configuration parameter N to allow the program to either
   run long enough or finish quickly enough.

   Targets using Trace
   -------------------------------
   N: No adjustments needed

   Targets that use trace to gather PC execution information should
   work fine with any reasonable number of loop iterations.

   Timer-based stochastic sampling
   -------------------------------
   N: Increase greatly (Start with 100000 and adjust, if necessary)

   For hardware targets that use a periodic timer to gather PC samples
   (generally at 60Hz, by default), the configuration parameter N may
   need to be increased by several orders of magnitude to allow the
   program to run long enough to collect a sufficient number of
   samples.

   To enable timer-based stochastic sampling for this program, you may
   need to set the Target-Based Timing Profiling option
   (-timer_profile). For more information, search your documentation
   for "Target-Based Timing Profiling".  Using the -timer_profile option
   generally requires the Board Initialization library, which provides
   __ghs_manprf* symbols used by the profiler.

   Simulated Targets
   -------------------------------
   N: Decrease (if necessary)

   Some simulator environments, especially cycle-accurate simulators,
   might require decreasing N to allow the program to finish within
   a reasonable time. Since every cycle is counted on cycle-accurate
   simulators, the accuracy of the profiling data should be unaffected.
*/

/* Loop iterations for this test */
#define N 100

int main(int argc, char **argv)
{
    Graph *g;

    g = process_args(argc, argv);
    if (!g)
	return 1;

    for (unsigned long i=0; i<N; i++)
	runtest(*g);

    g->pruneEdges();
    delete g;
    
    return 0;
}
