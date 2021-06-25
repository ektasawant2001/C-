#include<iostream>
#include<math.h>
using namespace std;
double power(double,int);
float power(float,int);
double power(double m,int p)
{
    double t;
    t=pow(m,p);
    return t;
}
float power(float m,int p)
{
    float x;
    x=pow(m,p);
    return x;
}
int main()
{
   double n,result;
   float s;
   int p;
   cout<<"Enter the double value:: "<<endl;
   cin>>n;
   cout<<"Enter the float value:: "<<endl;
   cin>>s;
   cout<<"Enter the power:: "<<endl;
   cin>>p;
   cout<<n<<" Power of "<<p<<" is "<<power(n,p)<<endl;
   cout<<s<<" Power of "<<p<<" is "<<power(s,p)<<endl;
   return 0;
}
