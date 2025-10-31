#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,n;
    cout<<"enter two number";
    cin>>a>>b;
    cout<<"enter opertion form 1 to 4";
    cin>>n;
    if(n==1) c=a+b;
    else if (n==2) c=a-b;
    else if (n==3)c=a*b;
    else if (n=4) c=a/b;
    
    cout<<c;
}