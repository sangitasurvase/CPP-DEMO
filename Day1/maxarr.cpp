#include<iostream>
using namespace std;

int main(){

    int arr[5];
    int max,i ;
    cout<<"Enter Element of array"<<endl;
    for(i=0;i<=4;i++)
    cin>>arr[i];
    max=*(arr+0);
    for(int i=1;i<=4;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
       
    } 
    cout<<"maximum value is"<<max;
}
    
