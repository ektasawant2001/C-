#include<iostream>
using namespace std;

int main(){
	int n,i,j,count=1;
	
	cout<<"Enter number of lines: "<<endl;
	cin>>n;
	
	cout<<"STAR PATTERN 5"<<endl;
	
	for(i=1;i<=n;){
		for(j=1;j<=n;j++){
			
			cout<<" "<<count<<" ";
			count++;
			
		}
		cout<<endl;
		i++;
	}
}