#include <iostream>
#include "Fahrenheit .h"

using namespace std;

int main()
{
    cout<<" TEMPERATURE CONVERTOR"<<endl;
    cout<<"............................................."<<endl;
    Fahrenheit Fah;
    float celsius;
    cout<<"Enter Celsius Temperature: ";
    cin>>celsius;
    Fah.setCelsius(celsius);

    cout<<"Converting to Fahrenheit is: "<<Fah.getTemperature(celsius);
    cout<<endl;
    return 0;
}
