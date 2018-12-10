#ifndef DROHNE_POINTLIST_H
#define DROHNE_POINTLIST_H

#include <iostream>
#include <vector>
#include "Point.h"

class PointList {
private:
    std::vector<Point*> pointList;
public:
	PointList();
	PointList(PointList& orig);
    void add(Point& arg);

    double getDistance();

    void print();
};


#endif //DROHNE_POINTLIST_H
