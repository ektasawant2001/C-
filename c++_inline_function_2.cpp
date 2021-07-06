//Inline function
#include<iostream>
using namespace std;
class line
{
public:
 inline int mul(int x,int y)
 {

 return(x*y);
 }

 inline int cube(int x)
 {

 return(x*x*x);
 }
};
int main()
{
 line d;
 int val1,val2;
 cout<<"enter two values";
 cin>>val1>>val2;
 cout<<"multiplication of two numbers is:"<<d.mul(val1,val2)<<endl;  cout<<"cube is:"<<d.cube(val1);
return 0;
}
