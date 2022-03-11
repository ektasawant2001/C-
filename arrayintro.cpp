#include<iostream>
using namespace std;
int main(){
	//declare
	int number[15];
	cout<<"Everything is fine"<<endl;
	
	//initializing array
	int sec[3] = {3,5,8};
	cout<<"Value at second index is : "<<sec[2]<<endl;
	
	int wave[5] = {0,1};
	int n=5;
	cout<<"Printing the array"<<endl;
	for(int i=0;i<=n;i++){
		cout<<wave[i]<<" ";
	}
	return 0;
}