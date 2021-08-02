//program to implement arithmetic operation using c++ language
#include<iostream>
using namespace std;
int main()
{	int a,b,c,opt;
	cout<<"\n Enter Two Number for arithmetic operation\t"<<endl;
	cin>>a>>b;
    cout<<endl;
	while(1){
		cout<<endl;
		cout<<" Number 1:"<<a<<endl;
		cout<<" Number 2:"<<b<<endl;
		cout<<"\t 1.Addition \n\t 2.Substraction \n\t 3.Multiplication ";
		cout<<"\n\t 4.Division \n\t 5.exit \nOption: ";
		cin>>opt;
		cout<<endl;
		if(opt>=5)
		break;
		switch(opt)
		{		case 1:
				c=a+b;
				cout<<"Addition is : "<<c<<endl;
				break;
			case 2:
				c=a-b;
				cout<<"Subtraction is : "<<c<<endl;
				break;
			case 3:
				c=a*b;
				cout<<"Multiplication is : "<<c<<endl;
				break;
            case 4:
				c=a/b;
				cout<<"division is : "<<c<<endl;
				break;
		}} return 0;}
