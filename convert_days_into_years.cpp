//Write a C++ Program to Convert Days Into Years Weeks and Days.
#include<iostream>
using namespace std;
int main()
{
    int days;
    float years,weeks;
    cout<<"Enter number of days: "<<endl;
    cin>>days;
    years=days/365;
    days=days%365;
    weeks=days/7;
    days=days%7;
    cout<<years<<" Years "<<weeks<<" Weeks "<<days<<" Days "<<endl;
    return 0;
}
