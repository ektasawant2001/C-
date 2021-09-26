//Write a C++ Program to Reverse a String using Array
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
     char str1[100],str2[100],temp;
     int i=0,j=0;
     cout<<"\nEnter any String :: "<<endl;
     cin>>str1;
     strcpy(str2,str1);
     j=strlen(str1)-1;
     while(i<j)
    {
       temp=str1[i];
       str1[i]=str1[j];
       str1[j]=temp;
       i++;
       j--;
    }
     cout<<"Reverse of String "<<str2<<" is: "<<str1<<endl;
     return 0;
}
