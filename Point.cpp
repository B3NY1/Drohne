#include <utility>

#include "Point.h"

Point::Point(std::string name, double latitude, double longitude)
    : m_name(std::move(name)),
    m_latitude(latitude),
    m_longitude(longitude)
{
    //nothing to do here
}
