#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle()
{
    //ctor
}
void Triangle::setHalf(float h)
{
    half=h;
}
void Triangle::setBase(float B)
{
    base=B;
}
void Triangle::setHeight(float H)
{
    height=H;
}
float Triangle::getArea(float half, float base, float height)
{
    return half*base*height;
}
