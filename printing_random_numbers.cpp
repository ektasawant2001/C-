//Write a C++ Program to Generate Random Numbers between 0 and 100.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number(bet 0 to 100): "<<endl;
    cin>>n;
    cout<<"The random numbers below "<<n<<" are: "<<endl;
    for(int i=n;i<=100;i++)
    {
       cout<<i<<" "<<endl;
    }
    return 0;

}
