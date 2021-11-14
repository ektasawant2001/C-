#include<iostream>
using namespace std;
class car{
public:
    int year;
    string model, brand;
   /* car(string m,string b,int y){
        model=m;
        brand=b;
        year=y;
    }*/
    car(string m,string b,int y);
};

car::car(string m,string b,int y){
        model=m;
        brand=b;
        year=y;
    }
int main(){
    car myObj1("x7","BMW",2019);
    car myObj2("Ford", "FIESTA", 2016);

    cout << myObj1.brand << " " << myObj1.model << " " << myObj1.year << "\n";
    cout << myObj2.brand << " " << myObj2.model << " " << myObj2.year << "\n";
    return 0;


}
