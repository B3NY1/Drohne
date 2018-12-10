#ifndef DROHNE_DISTANCECALCULATOR_H
#define DROHNE_DISTANCECALCULATOR_H
#include "Point.h"
#include <math.h>

#include <cstdio>

class DistanceCalculator {
private:
    static DistanceCalculator* m_pTheInstance;
    DistanceCalculator () = default; /* verhindert, dass ein Objekt außerhalb von DistanceCalculator erzeugt wird. */
    DistanceCalculator ( const DistanceCalculator& ); /* verhindert, dass eine weitere Instanz via
                                                        Kopie-Konstruktor erstellt werden kann */
    DistanceCalculator& operator=(DistanceCalculator const&){}; //defines assignment operator as private

    ~DistanceCalculator () = default;

    double getRadians(double Degree);

public:
    static DistanceCalculator* getInstance ();

	double distance(const Point &from, const Point &to);
};

#endif //DROHNE_DISTANCECALCULATOR_H
