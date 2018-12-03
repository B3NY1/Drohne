#include <iostream>
#include "Point.h"

int main() {
	Point* p = new Point("deine mum",20,10);
	//Point* p2 = new Point(12,-10);
	p->Print();
	p->set("",1,2);
	p->Print();
	//p2->Print();
	p->set("dein dad", 3, 4);
	p->Print();


    return 0;
}