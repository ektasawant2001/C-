//constructor and destructor
#include<iostream>
using namespace std;
class account{
	private:
	float bal,intr,amt,acc;float rate,dep,mon;
	char nm[10];
	public:
		account();
		~account();
		void getbal();
		void deposit();
		void compound();
		void menu();
		void withdraw();
		void display();
};
account::account()
  {	cout<<"\nEnter the account number:";cin>>acc;
	cout<<"\nEnter the name of the customer:";cin>>nm;
	rate=0.02;intr=0;
	amt=0;dep=0;
    cout<<"\nEnter u r balance";cin>>bal;}
account::~account()
   {	cout<<"\nThanks";cout<<"\nMeet Again";}
     void account::deposit(void)
	{	cout<<"\nEnter the deposit:";cin>>dep;
		bal=bal+dep;cout<<"\nThe total balance="<<bal;}
     void account::getbal(void)
	{     cout<<"\nBalance is:"<<bal;}
     void account::compound(void)
	{	cout<<"\nHow many Months:";cin>>mon;
		intr=bal*rate*mon;bal=bal+intr;
		cout<<"\nThe total balance"<<bal;}
     void account::withdraw()
   {	cout<<"\nEnter the amount for withdraw=";cin>>amt;
		if(amt<bal)
		  {	bal=bal-amt;
			cout<<"\nTotal balnce is="<<bal;}
            else {	cout<<"\n\nSORRY You Can NOt \withdraw";}}
 void account::menu()
	{	cout<<"1.Deposit\n2.Withdraw\n3.Compound\n4.Balance\n5.Display";}
 void account::display()
	{	cout<<"Acc.no.\tName\tDiposit\tWithdraw\tInterest\tBalance\n";
		cout<<acc<<"\t"<<nm<<"\t"<<dep<<"\t"<<amt<<"\t"<<intr<<"\t"<<bal;}
 void main(){
	account ac; int ch; char choice;
	do
	 {	ac.menu();
		cout<<"\nEnter u r choice";
		cin>>ch;
		switch(ch){
		    case 1: ac.deposit();break;
			case 2:ac.withdraw();break;
			case 3:ac.compound();break;
			case 4:ac.getbal();break;
			case 5:ac.display();break;
			default:
				cout<<"Sorry u r entered wrong choice";
		  }
		cout<<"\nDo U Want To Continue";
		cin>>choice;
      } while(choice=='y' || choice=='Y');
return 0;
    }
