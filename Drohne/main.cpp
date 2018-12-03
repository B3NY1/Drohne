#include <iostream>
#include "Point.h"
#include "PointList.h"

int main() {
	Point* p1 = new Point("dhbw saftladen",20,10);
	Point* p2 = new Point("miau", 30, -29);


	auto* pList = new PointList();
	pList->add(*p1);
	pList->add(*p2);


	PointList* pList2 = new PointList(*pList);
	pList2->add(*p1);
	pList->print();
	pList2->print();

	PointList* pWayPoints = new PointList();

	pWayPoints->add(*(new Point(std::string("707372 Stuttgart, Kreuzenacher Strasse 47"), 48.803242, 9.221968)));
	pWayPoints->add(*(new Point(std::string("707374 Stuttgart, Gnesener Strasse 69"), 48.811465, 9.229727)));
	pWayPoints->add(*(new Point(std::string("707372 Stuttgart, Ruhrstrasse 50"), 48.801934, 9.235032)));
	pWayPoints->add(*(new Point(std::string("707372 Stuttgart, Kreuzenacher Strasse 47"), 48.803242, 9.221968)));

	std::cout << "Distance: " << pWayPoints->getDistance() << std::endl;

    return 0;
}