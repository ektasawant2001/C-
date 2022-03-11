#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	
	cout<<"Printing the array"<<endl;
	//print the array
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nPrinting done\n";
}
int main(){
	
	int wave[5] = {0,1};
	printArray(wave,5);
	return 0;
}