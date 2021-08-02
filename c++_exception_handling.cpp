/*Program to implement concept of Exception Handling	*/
#include<iostream>
using namespace std;
int main()
{
  int a,b,x;
  cout<<" Enter values of a&b";
  cin>>a;
  cin>>b;
  x=a-b;

 try  {
	  if(x!=0)
      {
	  cout<<"\n\t Result (a/x)="<<a/x<<endl;
      }
      else
      {
	   throw(x);
      }
  }
catch(int i)
  {
	  cout<<"\n\t Exception caught: x="<<x<<endl;
  }
    cout<<"\n\t END";
  return 0;
}

