#include <bits/stdc++.h>
using namespace std;
int main()
{
    float bill,unit;
    cout<<"enter number of units consumed ";
    cin>>unit;
    if(unit<100)
    bill=unit*5.20+120;
    else if(unit<=200 && unit>=101)
    bill=unit*7.30+230;
    else if(unit>=201 && unit<=300)
    bill=unit*8.10+310;
    else if(unit>300)
    bill=unit*8.50+420;
    bill=bill+((18/100.0)*bill);
    cout<<bill;
                                    
}