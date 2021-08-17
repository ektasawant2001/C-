//Write a C++ Program to Check given number is Prime number or not
#include<iostream>
using namespace std;
int main()
{
int i,n;

  cout<<"Enter a number :: "<<endl;
  cin>>n;
  if(n==1)
  {
    cout<<"Smallest prime number is :: 2"<<endl;;
  }

  for(i=2;i<n;i++)
  {
      if(n%i==0)
      {
          cout<<"The Entered Number "<<n<<" is NOT a prime number."<<endl;
          break;
      }
  }

 if(n==i)
 {
    cout<<"The Entered Number "<<n<<" is a prime number."<<endl;
 }
return 0;
}

