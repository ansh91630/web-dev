#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    a=n%2;
    switch(a)
    {
        case 0: cout<<"entered number is even";
        break;
        default: cout<<"entered number is odd";
    }
}