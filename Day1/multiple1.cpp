#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"this is show fun in A class";
    }
};
class B{
    public:
    void show(){
        cout<<"this is show fun in B class";
    }
};
class C:public A, public B{
public:
    // void show(){
    //     cout<<"this is show fun in C class";
    // }
};
int main(){
    C c1;
    c1.show();
}