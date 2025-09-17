#include<iostream>
using namespace std;
class complex{
  int real;
  int img;
  public:
  void show();
  complex();
  complex(int i ,int r);
};
void complex::show()
{
    cout<<"comlex value is"<<real<<"+"<<img<<"i"<<endl;
}
complex::complex(){
    cout<<"Enter the value of real and img"<<endl;
    cin>>img>>real;

}
complex::complex(int r,int i)
{
real=r;
img=i;
}
int main()
{
    // complex  c1;
    // c1.show();

    complex c2(2,4);
    c2.show();
    
}