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
};
int main(){
    Student s1;
    s1.setmarks(87);
    cout<<"Marks: "<<s1.getmarks()<<endl;
    return 0;
}
