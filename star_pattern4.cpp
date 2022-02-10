#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	
	cout<<"Enter number of lines: "<<endl;
	cin>>n;
	
	cout<<"STAR PATTERN 4"<<endl;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			
			cout<<" "<<(n-j+1)<<" ";
			
		}
		cout<<endl;
		
	}
}