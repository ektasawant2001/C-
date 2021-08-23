//Write a C++ Program to Calculate HCF of Two Numbers using Functions
#include<iostream>
using namespace std;
int main()
{
    int x,z;
    cout<<"Enter two numbers: "<<endl;
    cin>>x>>z;
    if(x!=z)
    {
        if(x>z)
            cout<<"HCF of "<<x<<" and "<<z<<" is: "<<x-z<<endl;
        else
            cout<<"HCF of "<<x<<" and "<<z<<" is: "<<z-x<<endl;
    }
    return 0;
}
