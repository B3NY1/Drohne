/*
 * 23.12.2018
 *
 * Author:
 * Benjamin Diesch
 * Felix Preuschoff
 */

#ifndef DROHNE_POINT_H
#define DROHNE_POINT_H

#include <string>

class Point {
private:
    std::string m_name;
    double m_latitude;
    double m_longitude;

public:
    Point(double latitude, double longitude, std::string name = "noname");

	void set(double latitude, double longitude, std::string name);

	double getLatitude() const;
	double getLongitude() const;
	std::string getName() const;

	void Print();

};


#endif //DROHNE_POINT_H
