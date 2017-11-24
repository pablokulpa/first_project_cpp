#include <iostream>
#include <deque>
#include "Point.h"
#include "Triangle.h"
#include "Recentagle.h"

class Point;

int main() {
    std::cout << "Hello, World!" << std::endl;
    Point a(2,2);
    Point b(2,10);
    Point c(10,10);
    Point d(10,2);
    Triangle triangle(a,b,c);
    Recentagle recentagle(a,b,c,d);

    std::cout <<recentagle.perimiter()<<std::endl;
    std::vector<Recentagle> vector = {recentagle,recentagle};
    std::cout << recentagle.countSumRecentagle(vector)<<std::endl;


    std::cout << triangle.perimiter()<<std::endl;
    std::deque<Triangle> deque = {triangle,triangle};
    std::cout << triangle.countSumTriangle(deque);




}