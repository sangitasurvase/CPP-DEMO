#include<iostream>

using namespace std;
int main (){

    int a[3][3];
    int i,j;
    cout<<"Enter element of array"<<endl;
    for(i=0;i<=2;i++)
    {

        for ( j = 0; j<=2; j++)
        {
           cin>> a[i][j];
        }
        
    }
    cout<<"display element of array"<<endl;

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cout<<a[i][j];
        }
    }

}