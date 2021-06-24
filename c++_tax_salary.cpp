#include<iostream>
#include<math.h>
using namespace std;
class AnnualSalary
{
    double salary;
public:

    AnnualSalary(double sal)
    {
        salary=sal;
    }
    void calculateSalary()
    {
        if(salary<=1.5)
        {
            cout<<"Tax::0%"<<endl;
            salary=salary-salary*0/100;
            cout<<"salary after tax deduction:: "<<salary<<" lac"<<endl;
        }
        else if(1.5<salary<=3.0)
            {
                cout<<"Tax::10%"<<endl;
                salary=salary-salary*10/100;
                cout<<"salary after tax deduction:: "<<salary<<" lac"<<endl;
            }
            else
            {
                 cout<<"Tax::20%"<<endl;
                 salary=salary-salary*20/100;
                 cout<<"salary after tax deduction:: "<<salary<<" lac"<<endl;
            }

    }
};
int main()
{
    double salary;
    cout<<"Enter your annual salary(in lac):: "<<endl;
    cin>>salary;
    AnnualSalary obj(salary);
    obj.calculateSalary();
}
