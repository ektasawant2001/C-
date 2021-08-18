//Write a C++ Program to find Factorial of a Number using Recursion and loop.
//Factorial of any number is the product of an integer and all the integers below it for example factorial of 4 is
//4! = 4 * 3 * 2 * 1 = 24
#include<iostream>
using namespace std;
int main()
{
   int i, n, fact=1;
   cout<<"Enter number: "<<endl;
   cin>>n;
   for(i=1;i<=n;i++)
   {
      fact=fact*i;
   }
   cout<<"The factorial of "<<n<<" is: "<<fact;
   return 0;

}
