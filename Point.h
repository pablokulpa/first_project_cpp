//
// Created by pablo on 18.11.17.
//

#ifndef PROJECT1_POINT_H
#define PROJECT1_POINT_H


class Point {
public:

    Point(double x, double y);

    double getX() const;

    double getY() const;

    void setX(double x);

    void setY(double y);

private:
    double x,y;
};


#endif //PROJECT1_POINT_H
