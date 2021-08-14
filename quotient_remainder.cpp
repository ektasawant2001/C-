//Write a C++ Program to Find Quotient and Remainder of 2 numbers.
//In this program, user is asked to enter two integers (divisor and dividend) and computes the quotient and remainder.
//To compute quotient and remainder, both divisor and dividend should be integers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,q,r;
    cout<<"Enter Divisor: "<<endl;
    cin>>a;
    cout<<"Enter Dividend: "<<endl;
    cin>>b;
    q=b/a;
    r=b%a;
    //quotient = dividend / divisor;
    //remainder = dividend % divisor;
    cout<<"Quotient and Remainder of "<<a<<" and "<<b<<" is "<<q<<" and "<<r<<endl;
    return 0;
}
