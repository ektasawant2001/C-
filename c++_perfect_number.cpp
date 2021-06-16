#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,z=1;
    cout<<"Enter n:: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(z*n==sum)
        cout<<"Perfect Number";
    else
        cout<<"Not a perfect number";
    return 0;
}
