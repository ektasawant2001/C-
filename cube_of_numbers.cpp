//Write a C++ program to Find Cube of Number using MACROS.
#include<iostream>
#define CUBE(x) (x*x*x)
using namespace std;
int main()
{
    int r,c;
    cout<<"Enter a number: "<<endl;
    cin>>c;
    r=CUBE(c);
    cout<<"The cube is: "<<r<<endl;
    return 0;
}
