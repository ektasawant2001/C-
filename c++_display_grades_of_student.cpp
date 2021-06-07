#include<iostream>
using namespace std;
int main()
{
    float m1,m2,m3,total,avg;
    cout<<"Enter marks of three subject:: ";
    cin>>m1>>m2>>m3;
    total=m1+m2+m3;
    avg=total/3.0;
    if(avg>70)
        cout<<"Grade A"<<endl;
    else
    {
        if(avg>=35&&avg<60)
            cout<<"Grade B"<<endl;
        else
            cout<<"Grade C"<<endl;
    }
    cout<<"average is "<<avg;
    return 0;
}
