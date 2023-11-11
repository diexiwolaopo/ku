#include <iostream>
#include <algorithm>
#include <math.h>
#include<string>
using namespace std;
int main()
{
    float a=0,b=0;
    string s;
    cout<<"输入算式:";
    cin>>a>>s>>b;
    if(s=="+")
    {
        cout<<a<<"+"<<b<<"="<<a+b<<'\n';
    }
    if(s=="-")
    {
        cout<<a<<"-"<<b<<"="<<a-b<<'\n';
    }
    if(s=="*")
    {
        cout<<a<<"*"<<b<<"="<<a*b<<'\n';
    }
    if(s=="/")
    {
        cout<<a<<"/"<<b<<"="<<a/b<<'\n';
    }
    return 0;
}