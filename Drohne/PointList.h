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

    void print();

    //TODO: erzwinge tiefe Kopie -> Copy Constructor hinzufügen
};


#endif //DROHNE_POINTLIST_H
