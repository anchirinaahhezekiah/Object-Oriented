#include "Cube.h"
#include <iostream>
using namespace std;

Cube::Cube()
{
    //ctor
}
void Cube::setEdge(float E)
{
    edge=E;
}
float Cube::getVolume(float edge)
{
    return edge*edge*edge;
}
