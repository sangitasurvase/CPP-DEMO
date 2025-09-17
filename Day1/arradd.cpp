#include<iostream>
using namespace std;
int main()
{
    int i, arr[]={1,2,3,4,5};
    int sum=0;
    for(i=0; i<=4;i++){
    sum= sum+arr[i];
    }
    cout<<"sum="<<sum;
    return 0;
}