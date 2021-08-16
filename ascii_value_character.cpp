//Write a C++ Program to Display ASCII Value of a Character
//A character variable holds ASCII value (an integer number between 0 and 127) rather than that character itself in C programming.
//That value is known as ASCII value.
#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter character: "<<endl;
    cin>>c;
    cout<<"The ASCII value of character "<<c<<" is "<<int(c)<<endl;
    return 0;

}
