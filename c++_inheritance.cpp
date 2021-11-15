#include<iostream>
using namespace std;
class Student{
private:
    int marks;
public:
    void setmarks(int m){
        marks=m;
    }
    int getmarks(){
        return marks;
    }

    void show(){
    cout<<"****************************";
    }
};
class result:public Student{
public:
    string name="Ekta";
};
int main(){
    Student s1;
    s1.setmarks(87);
    result r1;
    r1.show();
    cout<<"\nName: "<<r1.name<<"\nMarks: "<<s1.getmarks()<<endl;
    cout<<"****************************";
    return 0;
}

