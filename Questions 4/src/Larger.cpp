#include "Larger.h"
#include <iostream>
using namespace std;

Larger::Larger()
{
    //ctor
}
void Larger::setFnum(float F)
{
    fnum=F;
}
void Larger::setSnum(float S)
{
    snum=S;
}
float Larger::getValue(float fnum, float snum)
{
    if(fnum>snum){cout<<fnum;}

    else
    if(snum>fnum){cout<<snum;}
    cout<<endl;

    return ((fnum>snum)/(snum>fnum));

}
