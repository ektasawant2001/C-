
#include<iostream>
using namespace std;
class geometry
{	private:
	float l,b,h,dia,s,v,x,in,rn,ht;
	public:
	void area(float l,float b,float h){
	    s=2*l*b*b*h*h*l;
		cout<<"Area of cuboid is:"<<s<<"sq.unit";}
	void area(float x){
		s=6*x*x;
		cout<<"\nsurface area of cube:"<<s<<"sq.unit";}
	void area(float rn, float ht){
	    float pi=3.142;
		s=2*pi*rn*(ht+rn);
		cout<<"\nSurface area of cylinder is:"<<s<<"sq.unit";}
	void vol(float l,float b,float h){
	    v=l*b*h;
		cout<<"\n\nvolume of cubid is:"<<v<<"cb.unit";}
	void vol(float x){
	    v=x*x*x;
		cout<<"\n\nvolume area of cube:"<<v<<"sq.unit";}
	void vol(float rn, float ht){	float pi=3.142;
		v=pi*rn*ht*rn;
		cout<<"\n\nvolume of cylinder is:"<<v<<"sq.unit";}
};
int main()
{	geometry g;
	int ch,i=10;
	while(1)
	{	cout<<"\n\n\nFIND VOLUME&SURFACE AREA OF SHAPES.";
		cout<<"\n1.CUBOID\n2.CUBE\n3.CYLINDER\n4.EXIT.";
		cout<<"\nCHOICE::";
		cin>>ch;
		if(ch==4)
		break;
		switch(ch)
		{      case 1:
				int l,b,h;
				cout<<"\nenter l,b & h of cuboid";
				cin>>l>>b>>h;
				g.area(l,b,h);
				g.vol(l,b,h);
				break;
			case 2:
				int s;
				cout<<"\nenter side of cube";
				cin>>s;
				g.area(s);
				g.vol(s);
				cout<<"\nDiagonal of cube:"<<1.73*i<<"unit";
				break;
			case 3:
				int rn,ht;
				cout<<"\nenter rn&ht of cylinder";
				cin>>rn>>ht;
				g.area(rn,ht);
				g.vol(rn,ht);
				break;
		       default:
				cout<<"\nWrong choice";
		}
	}	return 0;	}
