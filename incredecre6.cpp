#include<iostream>
using namespace std;

int main(){
	int a = 1, b=a++, c=++a;
	
	cout<<"B = "<<b<<endl;
	cout<<"C = "<<c<<endl;
	
	return 0;
}