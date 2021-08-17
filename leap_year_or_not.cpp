//Write a C++ Program to Check whether a year is Leap year or not
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter year: "<<endl;
    cin>>n;
    if(n%100==0)
    {
        if(n%400==0)
            cout<<n<<" is leap year"<<endl;
        else
            cout<<n<<" is not a leap year"<<endl;
    }
    else
    {
        if(n%4==0)
        {
          cout<<n<<" is leap year"<<endl;
        }
        else
        {
          cout<<n<<" is not a leap year"<<endl;
        }
    }
    return 0;
}
