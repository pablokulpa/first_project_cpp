#include <iostream>
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

    std::cout << triangle.perimiter()<<std::endl;
    std::cout << triangle.area()<<std::endl;
    std::cout << triangle.hasGreaterArea(triangle)<<std::endl;

    Recentagle recentagle(a,b,c,d);
    std::cout<< recentagle.area();




}