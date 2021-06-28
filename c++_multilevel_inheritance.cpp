//MULTILEVEL INHERITANCE
 #include<iostream>
using namespace std;
class A
{
public:
    int x;
 void getdata()
  {
     cout<<"Enter value of x:";
     cin>>x;
  }
};
class B:public A
{
public:
    int y;
   void readdata()
   {
     cout<<"Enter value of y:";
     cin>>y;
   }
};
class C:public B
{
private:
    int z;
public:
   void indata()
   {
      cout<<"Enter value of z:";
      cin>>z;
   }
   void product()
   {
      cout<<"\nProduct:"<<x*y*z;
   }
};
int main()
{
   C c;
   c.getdata();
   c.readdata();
   c.indata();
   c.product();
   return 0;
}
