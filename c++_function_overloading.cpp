//FUNCTION OVERLOADING
#include<iostream>
#include<stdio.h>
using namespace std;
void display(int);
void display(float);
void display(int,float);
int main()
 {
   int a=5;
   float b=5.5;
   display(a);
   display(b);
   display(a,b);
   return 0;
 }
 void display(int var)
 {
     cout<<"Integer number::"<<var<<endl;
 }
void display(float var)
 {
     cout<<"Float number::"<<var<<endl;
 }
void display(int var1,float var2)
 {
    cout<<"Integer number::"<<var1<<endl;
    cout<<"float number::"<<var2<<"\n";
 }
