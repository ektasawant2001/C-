#include<iostream>
using namespace std;
float vol(float);
int vol(int);
float vol(float,float,float);
int main()
{
    int a;
    float r1,l,b,h;
    cout<<"Enter side of cube:: "<<endl;
    cin>>a;
    cout<<"Enter radius of sphere:: "<<endl;
    cin>>r1;
    cout<<"Enter length, breadth, heigth of box:: "<<endl;
    cin>>l>>b>>h;
    cout<<"Volume of Cube is "<<vol(a)<<endl;
    cout<<"Volume of Sphere is "<<vol(r1)<<endl;
    cout<<"Volume of Box is "<<vol(l,b,h)<<endl;
    return 0;
}
float vol(float r1)
{
    return ((4*3.14*r1*r1*r1)/3);
}
int vol(int a)
{
    return(a*a*a);
}
float vol(float l,float b,float h)
{
    return(l*b*h);
}
