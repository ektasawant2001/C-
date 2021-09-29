//Write a C++ Program to Count Vowels Consonants  in String
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int cons,i,vowels,digits;
    char s[20];
    cons=vowels=digits=0;
    cout<<"Enter string: "<<endl;
    cin>>s;
    for(i=0;s[i]!='\0';++i)
    {
        if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z'))
         cons++;
     }
      cout<<"Number consonants in given string are: "<<cons<<endl;
     for(i=0;s[i]!='\0';++i)
     {
       if(s[i]=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
         vowels++;
     }
   cout<<"Number vowels in given string are: "<<vowels<<endl;


    return 0;
}
