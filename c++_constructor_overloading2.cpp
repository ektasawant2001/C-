
#include<iostream>
using namespace std;
int ch;
class constr
{	public:
			 int a,b,c;
			 constr(int,int);
			 constr(float,float);
			 constr(int,int,int);
			 void putdata();
			 void putdata1();
};
constr::constr(int x,int y)
{	 if(ch==1){
	    int c; c=x+y;
		cout<<"\n\tADDITION="<<c;}
    if(ch==2)
	{	int c;
		c=x-y;
		cout<<"\n\tSUBSTRACTION="<<c;
	}}
constr::constr(float x,float y)
{	 if(ch==1)
	{	float c;
		c=x+y;
		cout<<"\n\tADDITION="<<c;
	}	 if(ch==2)
	{	float c;
		c=x-y;
		cout<<"\n\tSUBSTRACTION="<<c;
	}
}	constr::constr(int a,int b,int c)
	{	int d;
		d=a*b*c;
		cout<<"\n\tMULTIPLICATION="<<d;	}
 int main()
{	static int x,y,z;
	static float p,q;
	while(1)
	{  cout<<"\n\t1.ADDITION\n\t2.SUBSTRACTION\n\t3.MULTIPLICATION\n\t4.EXIT";
	cout<<"\n\tENTER YOUR CHOICE\t";cin>>ch;
	switch(ch)
	{		case 1:
			 cout<<"\n\tENTER TWO INTEGER NUMBERS\t";
			 cin>>x>>y;
			 constr c1(x,y);
			 cout<<"\n\tENTER TWO FLOAT NUMBERS\t";
			 cin>>p>>q;
			 constr c2(p,q);
			 break;
		case 2:
			 cout<<"\n\tENTER TWO INTEGER NUMBERS\t";
			 cin>>x>>y;
			 constr c3(x,y);
			 cout<<"\n\tENTER TWO FLOAT NUMBERS\t";
			 cin>>p>>q;
			 constr c4(p,q);
			 break;
		case 3:
			 cout<<"\n\tENTER THREE INTEGER NUMBERS\t";
			 cin>>x>>y>>z;
			 constr c5(x,y,z);
			 break;
		case 4:
			return(0);
			break;
		default:
				cout<<"\n\tWRONG CHOICE";
	  }	return 0;}
