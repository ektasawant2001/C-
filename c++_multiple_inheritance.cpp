#include<iostream>
using namespace std;
class MyClass {
  public:
    void myFunction() {
      cout << "************ Hi Everyone ************ "<<endl; ;
    }
};
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "!!!!!!!!!!!! Keep Smiling !!!!!!!!!!!!" ;
    }
};

class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}
