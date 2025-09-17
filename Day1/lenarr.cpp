#include<iostream>
using namespace std;
int main ()
{
    int arr[5];
    int a,b,len;
    a= sizeof(arr);
    b=sizeof(arr[0]);
    len=a/b;
    cout<<"lenth of array"<<len;
}