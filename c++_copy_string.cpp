//Write a C++ Program to Copy One String to Another using Library Function.
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char s1[20],s2[20];
    cout<<"Enter string: "<<endl;
    cin>>s1;
    cout<<"String s1: "<<s1<<endl;
    cout<<"String s2(copy of s1): "<<strcpy(s2,s1)<<endl;
    return 0;
}
