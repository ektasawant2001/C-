//Write a C++ Program to Check Character is Uppercase, Lowercase, Digit or Special Character.
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"enter any character: "<<endl;                       //A=65 Z=90 a=97 z=122 1=49 9=57
    cin>>c;
    if(int(c)>=65&&int(c)<=90)
        cout<<"The given character "<<c<<" is uppercase"<<endl;
    else if(int(c)>=97&&int(c)<=122)
        cout<<"The given character "<<c<<" is lowercase"<<endl;
    else if(int(c)>=49&&int(c)<=57)
        cout<<"The given character "<<c<<" is Digit"<<endl;
    else
        cout<<"The given character "<<c<<" is special symbol"<<endl;

    return 0;

}
