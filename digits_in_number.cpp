//Write a C++ Program to Find the Number of Digits in a number.
#include<iostream>
using namespace std;
int main()
{
    int i ,n,count=0,a;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    a=n;
    while(n>0)
    {
         n=n/10;
         count++;
    }
    cout<<"The number of digits in "<<a<<" are: "<<count<<endl;
    return 0;
}
