//Write a C++ Program to Multiply two Numbers.
//In this program, user is asked to enter two numbers (floating point numbers).
//Then, the product of those two numbers is stored in a variable and displayed on the screen.
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter two numbers(float):"<<endl;
    cin>>a>>b;
    c=a*b;
    cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<c<<endl;
    return 0;
}
