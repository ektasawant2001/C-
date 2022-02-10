#include<iostream>
using namespace std;

int main(){
	int n,i,j,k;
	
	cout<<"Enter number of lines: "<<endl;
	cin>>n;
	
	cout<<"STAR PATTERN 10"<<endl;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cout<<" "<<i-j+1<<" ";
		}
		cout<<endl;
	}
}