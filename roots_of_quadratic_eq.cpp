//Write a C++ Program to Find Roots of Quadratic Equation using if else.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,r1,r2,d;
    cout<<"Enter the values of a,b,c: "<<endl;
    cin>>a>>b>>c;
    d=sqrt(b*b-4*a*c);
    r1=(-b+d)/(2*a);
    r2=(-b-d)/(2*a);
    cout<<"The roots of given quadratic equation are: "<<r1<<" and "<<r2<<endl;
    return 0;

}
