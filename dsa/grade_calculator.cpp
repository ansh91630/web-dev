#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p;
    cout<<"enter your percentage";
    cin>>p;

    if(90<p && p<=100) cout<<"a1";
    else if (80<p && p<=90) cout<<"a2";
    else if (70<p && p<=80) cout<<"b1";
    else if (60<p && p<=70) cout<<"b2";
    else if (50<p && p<=60) cout<<"c";
    else if (40<p && p<=50) cout<<"d";
    else if (p<40) cout<<"e";

}