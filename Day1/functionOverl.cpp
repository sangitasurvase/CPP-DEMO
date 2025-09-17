#include<iostream>
using namespace std;
class funOver{
    
    public:
    int a,b,c;


    int add(float x,float y){



    a=x;
    b=y;

}
 int add(int x,int y,int z){
    a=x;
    b=y;
    c=z;
 }
    void show(){
        cout<< "a="<<a<<"b="<<b<<"c="<<c;
    }

};
int main()
{
    funOver f1;
    f1.add(1.2f,3.3f);
    f1.show();
    // f1.add(1,3,4);
    // f1.show();
}