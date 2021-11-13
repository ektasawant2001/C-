#include<iostream>
using namespace std;
 class library{
public:
    int books(int maxBooks);
 };

int library::books(int maxBooks){
    return maxBooks;
}
int main(){
    library myObj;
    cout<<"**************************************************"<<endl;
    cout<<"Maximum Books in Library ::"<<myObj.books(17895)<<endl;
    cout<<"**************************************************"<<endl;
    return 0;
}
