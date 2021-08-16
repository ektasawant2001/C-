//Write a C++ Program to convert cm to feet yards and inches.
#include<iostream>
using namespace std;
int main()
{
    float n;
    cout<<"Enter the measurement in cm: "<<endl;
    cin>>n;
    //1 yard=91.44cm;
    //1 feet=30.48cm;
    //1 inch=2.54cm;
    cout<<n<<" cm in yards: "<<n/91.44<<endl;
    cout<<n<<" cm in feet: "<<n/30.48<<endl;
    cout<<n<<" cm in inches: "<<n/2.54<<endl;
    return 0;
}
