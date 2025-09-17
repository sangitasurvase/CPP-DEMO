#include<iostream>
using namespace std;
 int main(){
     int i, arr[4];
     cout<<"enter array element";
     for ( i = 0; i < 4; i++)
     cin>>arr[i];
     int n= sizeof(arr[0]);
     cout<<"Display the element"<<endl;
     for ( i=n-1; i>=0; i--)
     cout<<arr[i];
     
     
     
 }