//static member function
#include<iostream>
using namespace std;
class Demo
{
private:
static int x;
static int y;
public:
static void Print()
{
cout<<"value of x :"<<x<<endl;
cout<<"value of y :"<<y<<endl;
}
};
int Demo::x=10;
int Demo::y=20;
int main()
{
Demo d1;
cout<<"printing through object name :"<<endl;
d1.Print();
cout<<"printing through class name :"<<endl;
Demo::Print();
return 0;
}
