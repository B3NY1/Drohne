//
// Created by felix on 03.12.18.
//

#ifndef DROHNE_DISTANCECALCULATOR_H
#define DROHNE_DISTANCECALCULATOR_H
#include "Point.h"
#include <math.h>


class DistanceCalculator {
private:
	double getRadians(double Degree);


public:
	double Distance(const Point &from, const Point &to);
};


#endif //DROHNE_DISTANCECALCULATOR_H
