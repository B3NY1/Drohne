#include "PointList.h"

void PointList::add(Point &arg) {
    // Erstelle flache Kopie von 'arg' und füge sie in 'pointList' ein,
    // damit die Lebenszeit des Objekts unabhängig ist.
    auto* pNewPoint = new Point(arg);
    pointList.push_back(pNewPoint);
}

void PointList::print() {
    // Print every point in pointList using the print() method of class Point
    std::cout << "PointList (" << pointList.size() << " Points):" << std::endl;
    for (auto &i : pointList) {
        i->Print();
    }
}

PointList::PointList(PointList& orig) {
	for (int i = 0; i < orig.pointList.size; i++)
	{
		pointList.push_back(new Point(orig.pointList.at(i)->getName, orig.pointList.at(i)->getLatitude, orig.pointList.at(i)->getLongitude));
	}
}

PointList::PointList()
{

}
