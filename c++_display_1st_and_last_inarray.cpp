//Write a C++ Program to Display First and Last element of an array
#include<iostream>
using namespace std;
int main(){
    int i,n,a[20];
    cout<<"Enter the count: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nThe fist element in array is: "<<a[0]<<endl;
    cout<<"The last element in array is: "<<a[n-1]<<endl;
    return 0;
}
