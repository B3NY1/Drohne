/*
 * 23.12.2018
 *
 * Author:
 * Benjamin Diesch
 * Felix Preuschoff
 */

#ifndef DROHNE_DISTANCECALCULATOR_H
#define DROHNE_DISTANCECALCULATOR_H
#include "Point.h"
#include <math.h>

#include <cstdio>

class DistanceCalculator {
private:
    static DistanceCalculator* m_pTheInstance;
    DistanceCalculator () { } /* verhindert, dass ein Objekt von außerhalb von N erzeugt wird. */
                                // protected, wenn man von der Klasse noch erben möchte
    DistanceCalculator ( const DistanceCalculator& ); /* verhindert, dass eine weitere Instanz via
                                                        Kopie-Konstruktor erstellt werden kann */
    ~DistanceCalculator () { }

    double getRadians(double Degree);

    class CGuard
    {
    public:
        ~CGuard()
        {
            if( NULL != DistanceCalculator::m_pTheInstance )
            {
                delete DistanceCalculator::m_pTheInstance;
                DistanceCalculator::m_pTheInstance = NULL;
            }
        }
    };

public:
    static DistanceCalculator* getInstance () {
        static CGuard g;   // Speicherbereinigung
        if (!m_pTheInstance)
            m_pTheInstance = new DistanceCalculator ();
        return m_pTheInstance;
    }

	double Distance(const Point &from, const Point &to);
};

#endif //DROHNE_DISTANCECALCULATOR_H
