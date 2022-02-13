#include<iostream>
using namespace std;
int main(){
	int i,n;
	int isPrime =1;
	
	cout<<"Enter any number: "<<endl;
	cin>>n;
	
	for(i=2;i<n;i++){
		if(n%i==0){
			cout<<"Not prime number " <<endl;
			isPrime=0;
			break;
		}
	}
	if(isPrime=0){
	cout<<"Not Prime Number "<<endl;
	}else
		cout<<"Prime Number "<<endl;
	return 0;
}