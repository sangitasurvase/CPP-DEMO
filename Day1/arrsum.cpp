#include<iostream>
using namespace std;
int main ()
{
    int a[5],b[5];
    int i,sum;

    cout<<"Enter element of array";
    for(i=0;i<=4;i++)
    cin>>a[i];

    cout<<"Display the element of array"<<endl;
    for(i=0;i<=4;i++)
    cout<<a[i];


    for(i=0;i<=4;i++)
    {
    b[i]=a[i];
    cout<<"array b"<<b[i];
    }

    cout<<"Display b array"<<b[i]<<endl;
    sum=0;
    for(i=0;i<=4;i++){

        sum=sum+b[i];
    }
    cout<<"summetion is "<<sum;
}