#include <iostream>
using namespace std;

int main(){
	int i=8;
	
	cout<<" i = "<<i<<endl;
	
	cout<<"(++i) = "<<(++i)<<endl;
	//i=9
	
	cout<<"(i++) = "<<(i++)<<endl;
	//print => i=9  then i=10
	
	cout<<"(i--) = "<<(i--)<<endl;
	//print => i=10 then i=9
	
	cout<<"(--i) = "<<(--i)<<endl;
	//i=8
	
	return 0;
}