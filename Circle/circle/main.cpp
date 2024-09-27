//
// Created by 22970 on 24-9-26.
//
#include <iostream>
#include "Point.h"
#include "Circle.h"
using namespace std;

int main() {
    Circle c;
    Point cp;
    cp.set_x(10);
    cp.set_y(0);
    c.set_center(cp);
    c.set_radius(10);
    Point p;
    p.set_x(10);
    p.set_y(11);
    c.show_localization(p);
    return 0;
}
