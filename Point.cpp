//
// Created by pablo on 18.11.17.
//

#include "Point.h"

Point::Point(double x, double y) : x(x), y(y) {}

void Point::setX(double x) {
    Point::x = x;
}

void Point::setY(double y) {
    Point::y = y;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}
