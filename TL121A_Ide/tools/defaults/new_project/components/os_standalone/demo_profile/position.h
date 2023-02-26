#ifndef POSITION_H
#define POSITION_H

#include <ostream>
#include <math.h>

struct Position
{
    virtual bool connected(Position *) = 0;
    virtual int distance(Position *) = 0;
    virtual ostream &display(ostream &o) = 0;

    friend inline ostream &operator<< (ostream &out, Position &pos)
    {
	return pos.display(out);
    }
};

typedef Position* (*PosInit) (const void *&, int i);


template<class T, const int Dim> struct Point : public Position
{
    T coord[Dim];
    int ind;

    Point(const void *&data, int i) {read(data, i);}

    bool connected(Point<T,Dim> *p) {
	if ((p->ind&1)==(ind&1))
	    return false;
	return ((ind<=(p->ind+3)) && (ind>=(p->ind-3)));
    }
    bool connected(Position *p) {
	return connected((Point<T,Dim>*)p);
    }

    int distance(Point<T,Dim> *p) {
	double diff, sum = 0.0;
	for (int i=0; i<Dim; i++) {
	    diff = p->coord[i] - coord[i];
	    sum += diff*diff;
	}
	return ((int)(1.0+(100.0*sqrt(sum))));
    }
    int distance(Position *p) {
	return distance((Point<T,Dim>*)p);
    }

    void read(const void *&data, int i);
    ostream &display(ostream &o);
};

template<class T, const int Dim>
void Point<T,Dim>::read(const void *&data, int i) {
    T* x = (T*)data;
    for (int i=0; i<Dim; i++)
	coord[i] = *(x++);
    data = (void*)x;
    ind = i;
}

template<class T, const int Dim>
ostream& Point<T,Dim>::display(ostream& o) {
    o << "(" << coord[0];
    for (int i=1; i<Dim; i++)
	o << ", " << coord[i];
    o << ")";
    return o;
}

template<class T, const int Dim> struct PointB : public Point<T, Dim>
{
    PointB(const void *&data, int i) : Point<T, Dim>(data,i) {}
    
    bool connected(Position *p) {
	return true;
    }
};

#endif /* POSITION_H */
