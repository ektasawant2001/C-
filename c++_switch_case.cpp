//SWITCH CASE IN CPP
#include<iostream>
using namespace std;
int main()
{
   int a,b,add,sub,mul,div,op;
   cout<<"Enter value of a,b:";
   cin>>a>>b;
   while(op!=5)
  {
     cout<<"\n1.Addition\n2.Substraction\n3.Multiplication\n4.Division"; cout<<"\nEnter your choice:";
     cin>>op;
     switch(op)
     {
         case 1:
             add=a+b;
             cout<<"\nAddition of a,b:"<<add;
             break;

         case 2:
             sub=a-b;
             cout<<"\nSubstraction of a,b:"<<sub;
             break;

         case 3:
             mul=a*b;
             cout<<"\nMultiplication of a,b:"<<mul;
             break;
         case 4:
             div=a/b;
             cout<<"\nDivition of a,b:"<<div;
             break;

         case 5:
             cout<<"\n Exit";
    }
  }
    return 0;
}
