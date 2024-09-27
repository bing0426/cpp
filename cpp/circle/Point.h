//
// Created by 22970 on 24-9-26.
//

#ifndef POINT_H
#define POINT_H



class Point {
public:
    void set_x(int x);
    void set_y(int y);
    int show_x();
    int show_y();
private:
    int m_x = 0;
    int m_y = 0;
};



#endif //POINT_H
