#include "Fahrenheit .h"
#include <iostream>
using namespace std;

Fahrenheit ::Fahrenheit ()
{
    //ctor
}
void Fahrenheit::setCelsius(float C)
{
    celsius=C;
}
float Fahrenheit::getTemperature(float celsius)
{
    return ((celsius*9/5)+32);
}
