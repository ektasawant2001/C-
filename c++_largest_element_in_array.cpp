/*  C++ Program to find Largest Element in an Array  */
#include<iostream>
using  namespace std;
int main(){
    int i,n,a[50],max;
    cout<<"Enter the count: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    max=a[0];
     for(i=1;i<n;i++){
        if(a[i]>max)
            max=a[i];
     }
     cout<<"\nLargest Element in the array is: "<<max<<endl;
    return 0;

}
