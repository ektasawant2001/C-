//Write a C++ Program to Count Occurrences of Character in a String
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int count, i;
    char str[20], g;
    cout<<"Enter any string: "<<endl;
    cin>>str;
    cout<<"Given string is: "<<str<<endl;
    cout<<"Enter a character: "<<endl;
    cin>>g;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==g)
            count++;
    }
    if(count==0){
        cout<<"occurrences of "<<g<<" in given string "<<str<<" is zero"<<endl;
    }
    else
        cout<<"occurrences of "<<g<<" in given string "<<str<<" is "<<count<<endl;

    return 0;
}
