#include<iostream>
using namespace std;
int main ()
{
    int arr[]={1,3,4,5,6};
    int i,x,y;
    int e[5],o[5];
    
    for(i=0; i<=4;i++)
    {
        if(arr[i]% 2==0)
        {
            e[x]=arr[i];
             x++;
       
        }
        else{
            o[y]=arr[i];
            y++;
        }
    }
    for(i=0;i<=x;i++){
        cout<<e[x];
        for(i=0; i<=y;i++)
        cout<<o[i];
    }
}