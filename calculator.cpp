//Write a C++ Program to Design Simple Calculator using switch case
#include<iostream>
using namespace std;
int main()
{
    int m,n,choice,i;
    cout<<"1.Addition"<<endl<<"2.multiplication"<<endl<<"3.Division"<<endl<<"4.Subtraction"<<"5.Exit"<<endl;
    while(i<=2)
    {
       cout<<"Enter your choice: "<<endl;
       cin>>choice;
    switch(choice)
    {
    case 1:
        cout<<"ADDITION"<<endl;
        cout<<"Enter two numbers: "<<endl;
        cin>>m>>n;
        cout<<m<<"+"<<n<<"="<<m+n<<endl;
    case 2:
        cout<<"MULTPLICATION"<<endl;
        cout<<"Enter two numbers: "<<endl;
        cin>>m>>n;
        cout<<m<<"*"<<n<<"="<<m*n<<endl;
    case 3:
        cout<<"DIVISION"<<endl;
        cout<<"Enter two numbers: "<<endl;
        cin>>m>>n;
        cout<<m<<"/"<<n<<"="<<m/n<<endl;
    case 4:
        cout<<"SUBTRACTION"<<endl;
        cout<<"Enter two numbers: "<<endl;
        cin>>m>>n;
        cout<<m<<"-"<<n<<"="<<m-n<<endl;
    case 5:
        exit(1);
    default:
        cout<<"Enter right choice(1 2 3 4)"<<endl;
    }
}
}
