#include <utility>

#include "Point.h"
#include <iostream>

Point::Point(std::string name, double latitude, double longitude)
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
