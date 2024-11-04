#include <vector>
#include "Triangle.h"

Triangle::Triangle(Point normal, Point p1, Point p2, Point p3)
    : p1(p1), p2(p2), p3(p3), normal(normal)
{
}

Triangle::~Triangle()
{

}

Point Triangle::P1()
{
    return p1;
}

Point Triangle::P2()
{
    return p2;
}

Point Triangle::P3()
{
    return p3;
}

std::vector<Point> Triangle::Points()
{
    std::vector<Point> point;
    point.push_back(p1);
    point.push_back(p2);
    point.push_back(p3);
    return point;
}

Point Triangle::Normal()
{
    return normal;
}