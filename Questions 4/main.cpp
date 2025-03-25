#include <iostream>
#include "Larger.h"

using namespace std;

int main()
{
    cout<<"  FINDING MAXIMUM NUMBER"<<endl;
    cout<<" ............................................................................."<<endl;
    Larger Lar;
    float fnum;
    cout<<"Enter First Number: ";
    cin>>fnum;
    Lar.setFnum(fnum);

    float snum;
    cout<<"Enter Second Number: ";
    cin>>snum;
    Lar.setSnum(snum);

    cout<<"The Larger Value is: "<<Lar.getValue(fnum,snum);
    cout<<endl;

    return 0;
}
