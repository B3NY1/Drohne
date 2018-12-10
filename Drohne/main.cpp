#include <iostream>
#include "Point.h"
#include "PointList.h"

int main() {

	PointList* pWayPoints = new PointList();

	pWayPoints->add(*(new Point(std::string("707372 Stuttgart, Kreuzenacher Strasse 47"), 48.803242, 9.221968)));
	pWayPoints->add(*(new Point(std::string("707374 Stuttgart, Gnesener Strasse 69"), 48.811465, 9.229727)));
	pWayPoints->add(*(new Point(std::string("707372 Stuttgart, Ruhrstrasse 50"), 48.801934, 9.235032)));
	pWayPoints->add(*(new Point(std::string("707372 Stuttgart, Kreuzenacher Strasse 47"), 48.803242, 9.221968)));

	std::cout << "Distance: " << pWayPoints->getDistance() << std::endl;

    return 0;
}