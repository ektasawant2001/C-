//Write a C++ Program to Find whether given Number is Odd or Even.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    if(n%2==0)
        cout<<"Even number"<<endl;
    else
        cout<<"Odd number"<<endl;
    return 0;
}
