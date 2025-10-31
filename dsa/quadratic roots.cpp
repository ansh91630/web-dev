#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    float d;
    cout<<"enter 3 numbers";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d>0)
    cout<<"real roots";
    else if(d==0)
    cout<<"roots are real and equal";
    else if(d<0)
    cout<<"imaginary roots";
}