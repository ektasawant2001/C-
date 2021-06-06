#include<iostream>
using namespace std;
int main()
{
    int hour;
    cout<<"Enter hrs. ";
    cin>>hour;
    if(hour>=9&&hour<=12)
        cout<<"WORKING";
    else
        cout<<"LEISURE";
    return 0;
}
