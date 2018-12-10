#include "PointList.h"
#include "DistanceCalculator.h"

void PointList::add(Point &arg) {
    // Erstelle flache Kopie von 'arg' und füge sie in 'pointList' ein,
    // damit die Lebenszeit des Objekts unabhängig ist. (flache Kopie weil, Point keine Pointer enthält)
    auto* pNewPoint = new Point(arg);
    pointList.push_back(pNewPoint);
}

double PointList::getDistance() {
    double distance = 0.0;

    for(int i=0; i<pointList.size()-1; ++i){
        distance += DistanceCalculator::getInstance()->Distance(*pointList.at(i), *pointList.at(i+1));
    }

    return distance;
}

void PointList::print() {
    // Print every point in pointList using the print() method of class Point
    std::cout << "PointList (" << pointList.size() << " Points):" << std::endl;
    for (auto &i : pointList) {
        i->Print();
    }
}

PointList::PointList(PointList& orig) {
	for (int i = 0; i < orig.pointList.size(); i++)
	{
		pointList.push_back(new Point(orig.pointList.at(i)->getName(), orig.pointList.at(i)->getLatitude(), orig.pointList.at(i)->getLongitude()));
	}
}

PointList::PointList()
{
	//default construktor ecplizit deklariert da copy construktor vorhanden
}



