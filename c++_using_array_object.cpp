//USING ARRAY OF OBJECT
#include<iostream>
using namespace std;
#define MAX 10
class student
{
  private:
     char name[30];
     int rollno,total;
     float per;
public:
     void getdetails(void);
     void putdetails(void);
};
void student::getdetails(void)
{
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter roll no:";
    cin>>rollno;
    cout<<"Enter total marks out of 500:";
    cin>>total;
    per=(float)total/500*100;
}
void student::putdetails(void)
{
    cout<<"student details:"<<endl;
    cout<<"Name:"<<name<<",roll no:"<<rollno<<",total:"<<total<<",percentage:"<<per<<endl;
}
int main()
{
   student std[MAX];
   int n,i;
   cout<<"Enter Total number of students:";
   cin>>n;
   for(i=0;i<n;i++)
   {
      cout<<"enter details of student:"<<i+1<<":\n"; std[i].getdetails();
   }
   cout<<endl;
   for(i=0;i<n;i++)
   {
      cout<<"details of student:"<<(i+1)<<":\n";
      std[i].putdetails();
   }
 return 0;
}
