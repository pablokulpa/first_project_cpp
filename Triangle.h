//
// Created by pablo on 18.11.17.
//

#ifndef PROJECT1_TRIANGLE_H
#define PROJECT1_TRIANGLE_H


#include <deque>
#include "Point.h"
#include "Recentagle.h"

class Triangle {

public:
    Triangle(const Point &a, const Point &b, const Point &c);
    double perimiter();
    double area();
    bool hasGreaterArea(Triangle& triangle);
    bool hasGreaterArea(Recentagle& recentagle);
    double countSumTriangle(std::deque<Triangle> triangle);

private:
    Point a,b,c;

};


#endif //PROJECT1_TRIANGLE_H
