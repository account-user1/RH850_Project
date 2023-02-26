#include <iostream>

using namespace std;

#include "dataset.h"
#include "graph.h"


const double dataset1[] = {
    102.05, 165.93, 85.94,  253.58, 273.36, 197.13,  308.69, 320.26, 211.89,  
    303.28, 270.74, 130.22,  201.44, 160.70, 315.72,  3.17, 245.99, 77.10,  
    72.06, 306.68, 69.74,  44.52, 235.03, 293.62,  248.23, 102.86, 129.30,  
    63.75, 201.94, 232.16,  110.51, 204.58, 202.66,  96.76, 146.71, 112.65,  
    278.34, 320.10, 253.88,  71.72, 105.28, 6.93,  132.27, 121.71, 318.90,  
    60.47, 41.72, 206.75,  255.84, 192.97, 34.10,  63.01, 283.70, 92.69
};

const double dataset2[] = {
    65.52, 278.01, 54.85,  43.42, 211.80, 284.17,  216.66, 49.15, 53.47,  
    1.70, 117.76, 125.85,  17.99, 89.94, 65.88,  265.53, 1.59, 273.08,
    124.87, 144.50, 92.08,  215.47, 226.90, 106.41,  209.63, 212.86, 60.23,  
    143.27, 102.39, 245.29,  308.17, 223.17, 42.17,  48.95, 283.43, 70.28,
    180.76, 70.53, 176.01,  149.59, 19.18, 116.47,  57.90, 235.00, 288.17,  
    233.37, 26.71, 71.68,  276.50, 85.58, 50.52,  259.11, 12.10, 4.76,  
    181.21, 205.79, 154.33,  298.64, 11.28, 243.39,  27.87, 48.03, 236.01,  
    316.03, 316.02, 168.12,  216.00, 159.90, 295.57,  19.53, 270.94, 70.73,  
    54.32, 285.55, 41.23,  28.59, 203.73, 278.89,  234.11, 61.40, 92.44,  
    15.51, 150.31, 173.15,  64.08, 142.80, 121.52,  16.22, 74.76, 45.29
};

const double dataset3[] = {
    1.0, 1.0,  1.0, 2.0,  2.0, 1.0,  2.0, 2.0
};

Position* v3init(const void *&data, int i)
{
    return new Point<double,3>(data, i);
}

Position* v3initb(const void *&data, int i)
{
    return new PointB<double,3>(data, i);
}

Position* v2init(const void *&data, int i)
{
    return new Point<double,2>(data, i);
}

Graph *initialize_dataset1()
{
    Graph *g = new Graph((sizeof(dataset1)/(3*sizeof(double))),
	    dataset1, v3init);
    g->calculateEdges();
    g->calculateEdgeCosts();
    return g;
}

Graph *initialize_dataset2()
{
    Graph *g = new Graph((sizeof(dataset2)/(3*sizeof(double))),
	    dataset2, v3initb);
    g->calculateEdges();
    g->calculateEdgeCosts();
    return g;
}

Graph *initialize_dataset3()
{
    Graph *g = new Graph((sizeof(dataset3)/(2*sizeof(double))),
	    dataset3, v2init);
    g->calculateEdges();
    g->calculateEdgeCosts();
    return g;
}

