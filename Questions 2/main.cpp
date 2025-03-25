#include <iostream>
#include "Triangle.h"

using namespace std;

int main()
{

    cout<<"       AREA OF A TRINGLE"<<endl;
    cout<<".........................................................................."<<endl;
    Triangle Tri;
    float half;
    half=0.5;
    Tri.setHalf(half);

    float base;
    cout<<"Enter base = ";
    cin>>base;
    Tri.setBase(base);

    float height;
    cout<<"Enter height = ";
    cin>>height;
    Tri.setHeight(height);

    cout<<"The Area of the Triangle is: "<<Tri.getArea(half, base, height);
    cout<<endl;

    return 0;
}
