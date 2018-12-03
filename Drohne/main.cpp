#include <iostream>
#include "Point.h"
#include "PointList.h"

int main() {

	Point* p = new Point("deine mum",20,10);
	//Point* p2 = new Point(12,-10);
	p->Print();
	p->set("",1,2);
	p->Print();
	//p2->Print();
	p->set("dein dad", 3, 4);
	p->Print();

	Point* p1 = new Point("dhbw saftladen",20,10);
	Point* p2 = new Point("miau", 30, -29);


	auto* pList = new PointList();
	pList->add(*p1);
	pList->add(*p2);
	pList->print();

    return 0;
}