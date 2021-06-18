#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
    //default constructor
    Rectangle()
    {
        length=0;
        breadth=0;
    }
    // parametrized constructor
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    // copy constructor
    rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    Rectangle r1(10,5);//parametrized constructor called
    Rectangle r2(r1); // copy constructor called
    Rectangle();
    cout<<"Area of Rectangle R1 is "<<r1.area()<<endl;
    cout<<"Area of Rectangle R2 is "<<r2.area()<<endl;
}
