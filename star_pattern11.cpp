#include<iostream>
using namespace std;

int main(){
	int n,i,j,k;
	
	cout<<"Enter number of lines: "<<endl;
	cin>>n;
	
	cout<<"STAR PATTERN 11"<<endl;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			char ch =('A'+i-1);
			cout<<" "<<ch<<" ";
		}
		cout<<endl;
	}
}