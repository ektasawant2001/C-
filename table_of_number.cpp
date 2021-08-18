//Write a C++ program to Print Multiplication Table of a given number.
#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter number: "<<endl;
    cin>>n;
    for(i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
