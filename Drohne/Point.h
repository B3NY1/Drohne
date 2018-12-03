#ifndef DROHNE_POINT_H
#define DROHNE_POINT_H

#include <string>

class Point {
private:
    std::string m_name;
    double m_latitude;
    double m_longitude;

public:
    Point(std::string name, double latitude, double longitude);

    //TODO: create 'void Set(...)' method

    //TODO: create 'void print(...)' method

};


#endif //DROHNE_POINT_H
