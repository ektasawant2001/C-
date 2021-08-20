//Write a C++ Program to Reverse a Number using while loop
#include<iostream>
using namespace std;
int main()
{
    int i,n,rev=0,r,a;
    cout<<"enter a number: "<<endl;
    cin>>n;
    a=n;
    while(n>0)
    {
         r=n%10;
         rev=rev*10+r;
         n=n/10;
    }
    cout<<"Reverse of number "<<a<<" is: "<<rev<<endl;
    return 0;
}
