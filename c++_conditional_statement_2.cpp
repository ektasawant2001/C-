#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:: ";
    cin>>age;
    if(age>=16&&age<=45)
        cout<<"you'r young";
    else
    {
        if(age<16)
            cout<<"you'r teenager";
        else
            cout<<"you'r old";
    }
    return 0;
}
