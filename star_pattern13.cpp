#include<iostream>
using namespace std;

int main(){
	int n,i,j,k;
	
	cout<<"Enter number of lines: "<<endl;
	cin>>n;
	
	cout<<"STAR PATTERN 13"<<endl;
	char ch ='A';
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cout<<" "<<ch<<" ";
			ch=ch+1;
		}
		cout<<endl;
	}
}