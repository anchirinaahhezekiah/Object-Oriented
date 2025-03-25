#include <iostream>
#include "Circle.h"

using namespace std;

int main()

{
    cout<<"                                         AREA OF A CIRCLE"<<endl;
    cout<<"                                       ..........................................................."<<endl;



    Circle Cir;
    float pi;
    pi=3.14;
    Cir.setPi(pi);

    float radius;
    cout<<"Enter radius = ";
    cin>>radius;
    Cir.setRadius(radius);

    cout <<"The Area of the Circle is: "<<Cir.getArea(pi,radius);
    cout<<endl;

    return 0;
}
