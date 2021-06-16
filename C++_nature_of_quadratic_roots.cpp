#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,r1,r2,d=0;
    cout<<"Enter values of a,b,c:: ";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0)
    {
        cout<<"roots are real and equal";
        cout<<endl<<(-b/(2*a));
    }
    else
    {
        if(d>0)
          {
            cout<<"Roots are real and unequal";
            cout<<endl<<(-b+sqrt(d))/(2*a);
            cout<<endl<<(-b-sqrt(d))/(2*a);
          }

        else
        {
            cout<<"Roots are imaginary";
        }
    }
    return 0;
}
