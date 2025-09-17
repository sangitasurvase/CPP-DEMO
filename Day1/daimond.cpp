#include<iostream>
using namespace std;
class Base{
    public:
    void show(){
        cout<<"this is show fun in base class";
    }
};
class parent1: virtual public Base
{
    
};
class parent2:  virtual public Base
{
    
};
class child:public parent1, public parent2
{
    
};
int main()
{
    child c1;
    c1.show();
}