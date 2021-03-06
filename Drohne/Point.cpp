/*
 * 23.12.2018
 *
 * Author:
 * Benjamin Diesch
 * Felix Preuschoff
 */

#include <utility>

#include "Point.h"
#include <iostream>

Point::Point(double latitude, double longitude, std::string name)
    : m_name(std::move(name)),
    m_latitude(latitude),
    m_longitude(longitude)
{
	//nothing to do here
}

double Point::getLatitude() const
{
	return m_latitude;
}

double Point::getLongitude() const
{
	return m_longitude;
}

std::string Point::getName() const
{
	return m_name;
}

void Point::Print()
{
	std::cout << m_name << " | Lat: " << m_latitude << " | Long: " << m_longitude << std::endl;
}

void Point::set(double latitude, double longitude, std::string name) 
//kein default parameter, da sonst der name bei keiner Angabe auf "noname" gesetzt wird.
{
	if (name != "") {
		m_name = name;
	}
	m_latitude = latitude;
	m_longitude = longitude;
}
