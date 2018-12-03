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
