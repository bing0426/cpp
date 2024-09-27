//
// Created by 22970 on 24-9-26.
//

#ifndef CIRCLE_H
#define CIRCLE_H
#include "Point.h"
#include <iostream>



class Circle {
public:
    void set_center(Point c);
    void show_localization(Point p);
    void set_radius(int radius);
private:
    Point m_center;
    int m_radius = 0;
};



#endif //CIRCLE_H
