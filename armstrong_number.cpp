//Write a C++ Program to Check whether a Number is Armstrong or not using function.
//Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits is equal to the number itself.
// Some Armstrong numbers is 0, 1, 153, 370, 371, 407, 1634 etc.
#include<iostream>
using namespace std;
int main()
{
    int z,r,x=0,n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    z=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        x=x+r*r*r;
    }
    if(x=z)
       {
        cout<<"The given number "<<z<<" is Armstrong number"<<endl;
       }
    else
    {
     cout<<"The given number "<<z<<" is not Armstrong number"<<endl;

    }
     return 0;
}
