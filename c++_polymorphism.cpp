#include<iostream>
using namespace std;

class mom{
public:
    void lazy(){
    cout<<"Clean your room"<<endl;
    }

};
class me:public mom{
public:
    void lazy(){
    cout<<"After 5 min"<<endl;
    }

};
class brother:public mom{
public:
    void lazy(){
    cout<<"My room is clean!!!"<<endl;
    }

};
int main(){
mom l1;
me mework;
brother bwork;

l1.lazy();
mework.lazy();
bwork.lazy();
return 0;
}
