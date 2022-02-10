#include<iostream>
using namespace std;

int main(){
	int n,i,j,k;
	
	cout<<"Enter number of lines: "<<endl;
	cin>>n;
	
	cout<<"STAR PATTERN 9"<<endl;
	
	for(i=1;i<=n;i++){
		k=i;
		for(j=1;j<=i;j++){
			
			cout<<" "<<k<<" ";
			k++;
			
		}
		cout<<endl;
	}
}