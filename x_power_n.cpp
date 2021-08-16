//Write a C++ Program to raise any number X to power N.
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int x,n,r;
  cout<<"Enter a number: "<<endl;
  cin>>x;
  cout<<"Enter power: "<<endl;
  cin>>n;
  r=pow(x,n);
  cout<<"The result is: "<<r<<endl;
  return 0;
}
