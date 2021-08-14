//Write a C++ Program to Swap Two Numbers without using third variable. C++ Program to Swap Two Numbers without  third variable.
#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"The values of A and B are "<<a<<" and "<<b<<endl;
    t=a;
    a=b;
    b=t;
    cout<<"The values of A and B after swapping are "<<a<<" and "<<b<<endl;
    return 0;
}
