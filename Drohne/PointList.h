#ifndef DROHNE_POINTLIST_H
#define DROHNE_POINTLIST_H

#include <iostream>
#include <vector>
#include "Point.h"

class PointList {
private:
    std::vector<Point*> pointList;
public:
    void add(Point& arg);

    void print();

    //TODO: erzwinge tiefe Kopie -> Copy Constructor hinzufügen
};


#endif //DROHNE_POINTLIST_H
