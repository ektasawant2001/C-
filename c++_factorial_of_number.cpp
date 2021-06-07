#include<iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"Enter n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorial of number "<<n<<" is "<<fact;
    return 0;
}
