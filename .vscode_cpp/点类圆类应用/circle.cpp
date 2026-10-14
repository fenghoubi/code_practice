#include"circle.h"

    void Circle::setR(int addr){r=addr;}
    int Circle::getR()const{return r;}
    void Circle::setCenter(const Point&addcenter ){r_center = addcenter;}
    Point Circle::getCenter()const{return r_center;}
    int getRx(const Point &c1){return c1.getX();}
    int getRy(const Point &c1){return c1.getY();}

