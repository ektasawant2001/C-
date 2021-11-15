#include<iostream>
using namespace std;
class Student{
protected:
    int marks;
};
class activites: public Student{
public:
    string Grades;
    void setmarks(int m){
        marks=m;
    }
    int getmarks(){
        return marks;
    }
};
int main(){
    activites s1;
    s1.setmarks(87);
    s1.Grades="A";
    cout<<"Marks: "<<s1.getmarks()<<endl;
    cout<<"Grades: "<<s1.Grades<<endl;
    return 0;
}
