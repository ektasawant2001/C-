//HIERARCHICAL INHERITANCE
#include<iostream>
using namespace std;
class A
{
public:
    int x,y;
    void getdata()
    {
        cout<<"Enter value of x,y:"<<endl;
        cin>>x>>y;
    }
};
class B: public A
{
public:
     void sum()
    {
        cout<<"sum is: "<<x+y<<endl;
    }
};
class C:public A
{
public:
     void product()
     {
        cout<<"Product is: "<<x*y<<endl;
     }
};
int main()
{
    B b;
    C c;
    b.getdata();
    b.sum();
    c.getdata();
    c.product();
    return 0;
}
