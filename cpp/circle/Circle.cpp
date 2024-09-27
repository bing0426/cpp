//
// Created by 22970 on 24-9-26.
//

#include "Circle.h"
void Circle::set_center(Point c) {
    m_center = c;
}

void Circle::set_radius(int radius) {
    m_radius = radius;
}
void Circle::show_localization(Point p) {
    int radius2 = m_radius * m_radius;
    int ptocenter = (p.show_x() - m_center.show_x()) * (p.show_x() - m_center.show_x()) +
                    (p.show_y() - m_center.show_y()) * (p.show_y() - m_center.show_y());
    if(radius2 > ptocenter) {
        std::cout<<"The point is in the circle."<<std::endl;
    }
    else if(radius2 == ptocenter) {
        std::cout<<"The point is on the circle."<<std::endl;
    }
    else {
        std::cout<<"The point is out of the circle."<<std::endl;
    }
}