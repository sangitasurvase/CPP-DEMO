#include<iostream>
using namespace std;
int main(){
    int i,a[5];
    cout<<"Enter Element of array";
    for(i=0;i<5;i++)
    cin>>a[i];

    int max=*(a+0);
    for(i=0;i<5;i++)
    {
        if(max<a[i]){

            max=a[i];
        }
    }
    cout<<"max="<<max;

}