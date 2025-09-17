#include<iostream>
using namespace std;
class test{
    public:
    test(){
        cout<<"constructor called"<<endl;
    }
    ~test(){
        cout<<"destructor is called"<<endl;
    }
};
 int main (){
     test t1,t2;
 }