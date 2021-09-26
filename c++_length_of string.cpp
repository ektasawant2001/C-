//Write a C++ program to Find Length of String without using strlen
#include<iostream>
using namespace std;
int main(){
    int count, i;
    char str[20];
    cout<<"Enter any string: "<<endl;
    cin>>str;
    cout<<"Given string is: "<<str<<endl;
    for(i=0;str[i]!='\0';i++){
            count++;
    }
    cout<<"The length of given string is: "<<count<<endl;
    return 0;
}
