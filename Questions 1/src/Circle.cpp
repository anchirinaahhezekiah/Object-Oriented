#include "Circle.h"
#include <iostream>
using namespace std;

Circle::Circle()
{
    //ctor
}
void Circle::setPi(float P)
{
    pi=P;
}
void Circle::setRadius(float R)
{
    radius=R;
}
float Circle::getArea(float pi, float radius)
{
    return pi*radius*radius;
}
