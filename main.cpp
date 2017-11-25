#include <iostream>
#include <deque>
#include "Point.h"
#include "Triangle.h"


int main() {
    Point a(2,2);
    Point b(2,10);
    Point c(10,10);
    Point d(10,2);

    Triangle triangle(a,b,c);
    Triangle triangle2(a,b,c);
    Triangle triangle3(a,b,c);

    Recentagle recentagle(a,b,c,d);
    Recentagle recentagle2(a,b,c,d);
    Recentagle recentagle3(a,b,c,d);

    std::vector<Recentagle> vector = {recentagle, recentagle2, recentagle3};
    std::cout << "Recentagles perimeter sum: " << recentagle.countSumRecentagle(vector)<<std::endl;

    std::deque<Triangle> deque = {triangle, triangle2, triangle3};
    std::cout << "Triangle perimeter sum: " << triangle.countSumTriangle(deque);




}