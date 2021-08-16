//Write a C++ Program to Calculate Compound Interest.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float ci,p,r,t;
    cout<<"Enter principle amount: "<<endl;
    cin>>p;
    cout<<"Enter time period: "<<endl;
    cin>>t;
    cout<<"Enter rate of interest: "<<endl;
    cin>>r;
    ci = p*pow((1+r/100),t);
    cout<<"The compound interest is: "<<ci<<endl;
    return 0;
}
