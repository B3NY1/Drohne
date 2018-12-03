#include <iostream>
#include "Point.h"
#include "PointList.h"

int main() {
	Point* p1 = new Point("dhbw saftladen",20,10);
	Point* p2 = new Point("miau", 30, -29);


	auto* pList = new PointList();
	pList->add(*p1);
	pList->add(*p2);
	pList->print();

    return 0;
}