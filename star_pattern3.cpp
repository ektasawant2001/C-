#include<iostream>
using namespace std;

int main(){
	int n,i,j;
	
	cout<<"Enter number of lines: "<<endl;
	cin>>n;
	
	cout<<"STAR PATTERN 3"<<endl;
	
	for(i=1;i<=n;){
		for(j=1;j<=n;j++){
			
			cout<<" "<<j<<" ";
			
		}
		cout<<endl;
		i++;
	}
}