//
// Created by pablo on 18.11.17.
//

#include <cmath>
#include "Recentagle.h"



double Recentagle::area() {
    double area = this->getSectionLength(getA(),getB())*this->getSectionLength(getB(),getC());
    return area;

}

double Recentagle::getSectionLength(Point a, Point b) {
    double section = sqrt(pow(b.getX()-a.getX(),2)+ pow(b.getY()-a.getY(),2));
    return section;
}

Recentagle::Recentagle(const Point &a, const Point &b, const Point &c, const Point &d) : a(a), b(b), c(c), d(d) {}

const Point &Recentagle::getA() const {
    return a;
}

const Point &Recentagle::getB() const {
    return b;
}

const Point &Recentagle::getC() const {
    return c;
}

const Point &Recentagle::getD() const {
    return d;
}

double Recentagle::perimiter() {
    double a = getSectionLength(getA(),getB());
    double b = getSectionLength(getB(),getC());
    double perimiter = 2 * a + 2 * b;
    return perimiter;
}

double Recentagle::countSumRecentagle(std::vector<Recentagle> recentagles) {
    double sum = 0;
    for(Recentagle recentagle : recentagles){
        sum += recentagle.perimiter();
    }
    return sum;
}
