#pragma once
#include"point.h"
class Circle
{
    int r;
    Point r_center;
    public:
    void setR(int addr);
    int getR()const;
    void setCenter(const Point&addcenter );
    Point getCenter()const;
    int getRx(const Point &c1);
    int getRy(const Point &c1);
};