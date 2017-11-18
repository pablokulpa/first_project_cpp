//
// Created by pablo on 18.11.17.
//

#include "Triangle.h"
#include <cmath>
#include <iostream>

Triangle::Triangle(const Point &a, const Point &b, const Point &c) : a(a), b(b), c(c) {}

double Triangle::perimiter() {
    double perimiter = fabs(a.getX()*b.getY()+b.getX()*c.getY()+c.getX()*a.getY()+
                                    c.getX()*b.getY()+a.getX()*c.getY()+b.getX()*a.getY())/2;
    return perimiter;

}

double Triangle::area() {
    double area = fabs(a.getX()*(b.getY()-c.getY()) + b.getX()*(c.getY()-a.getY())
                       + c.getX()*(a.getY()-b.getY()))/2;
    return area;
}

bool Triangle::hasGreaterArea(Triangle& triangle) {
    if(triangle.area() > this->area()){
        return true;
    }

    return false;
}

bool Triangle::hasGreaterArea(Recentagle &recentagle) {
    if(recentagle.area() > this->area()){
        return true;
    }

    return false;
}
