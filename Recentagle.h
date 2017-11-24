//
// Created by pablo on 18.11.17.
//

#ifndef PROJECT1_RECENTAGLE_H
#define PROJECT1_RECENTAGLE_H


#include <vector>
#include "Point.h"

class Recentagle {
public:
    Recentagle(const Point &a, const Point &b, const Point &c, const Point &d);

    const Point &getA() const;

    const Point &getB() const;

    const Point &getC() const;

    const Point &getD() const;

    double getSectionLength(Point x, Point y);
    double area();
    double perimiter();
    double countSumRecentagle(std::vector<Recentagle> recentagles);

private:
    Point a,b,c,d;

};


#endif //PROJECT1_RECENTAGLE_H
