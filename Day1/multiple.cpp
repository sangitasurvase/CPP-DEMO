#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"constructor called"<<endl;
    }
};
class B{
    public:
    B(){
        cout<<"constructor b is called";
    }
};
class c: public B,public A
{
    public:
    c(){
      cout<<"constructor c is called";
    }
    
    
};

int main()
{
    c c1;
}