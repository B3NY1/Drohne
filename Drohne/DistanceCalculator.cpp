#define _USE_MATH_DEFINES
#include "DistanceCalculator.h"


double DistanceCalculator::getRadians(double degree)
{
	return degree * (M_PI / 180.0);
}

double DistanceCalculator::Distance(const Point &from, const Point &to)
{
	double lat1 = getRadians((from.getLatitude() + to.getLatitude()) / 2);
	double dx = 111.3 * cos(lat1) * (from.getLongitude() - to.getLongitude());
	double dy = 111.3 * (from.getLatitude() - to.getLatitude());

	return sqrt(dx * dx + dy * dy);
}