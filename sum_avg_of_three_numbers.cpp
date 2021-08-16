//Write a C++ Program to Find Sum and Average of three numbers.
#include<iostream>
using namespace std;
int main()
{
    int n,m ,k,sum=0;
    float avg;
    cout<<"Enter three numbers: "<<endl;
    cin>>n>>m>>k;
    sum=n+m+k;
    avg=sum/3.0;
    cout<<"The sum of "<<n<<","<<m<<" and "<<k<<" is: "<<sum<<endl;
    cout<<"The average of "<<n<<","<<m<<" and "<<k<<" is: "<<avg<<endl;
    return 0;

}
