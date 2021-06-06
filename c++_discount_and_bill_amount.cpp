#include<iostream>
using namespace std;
int main()
{
    float billamount,discount=0.0;
    cout<<"Enter bill amount: ";
    cin>>billamount;
    if(billamount>=500)
    {
        discount=billamount*20/100;
    }
    else if(billamount>=100&&billamount<500)
    {
        discount=billamount*10/100;
    }
    cout<<"Bill amount is: "<<billamount<<endl;
    cout<<"Discount is: "<<discount<<endl;
    cout<<"Final bill is: "<<billamount-discount<<endl;
}
