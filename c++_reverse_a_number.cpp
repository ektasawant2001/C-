#include<iostream>
using namespace std;
int main()
{
    int n,r,rev=0,m;
    cout<<"enter value:: ";
    cin>>n;
    m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        rev=rev*10+r;
    }
    cout<<"reverse of given number is :: "<<rev<<endl;
    return 0;
}

