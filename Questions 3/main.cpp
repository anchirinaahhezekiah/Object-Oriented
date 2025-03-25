#include <iostream>
#include "Cube.h"

using namespace std;

int main()
{

    cout<<"      VOLUME OF A CUBE"<<endl;
    cout<<"           .........................................................."<<endl;
    Cube Cub;
    float edge;
    cout<<"Enter edge = ";
    cin>>edge;
    Cub.setEdge(edge);

    cout<<"Volume of the Cube is: "<<Cub.getVolume(edge);
    cout<<endl;

    return 0;
}
