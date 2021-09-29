//Write a C++ Program to Concatenate Two Strings using strcat()
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[20],s2[20];
    cout<<"Enter two strings: "<<endl;
    cin>>s1>>s2;
    cout<<"Strings after Concatenate: "<<strcat(s1,s2)<<endl;
    return 0;
}
