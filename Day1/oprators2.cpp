#include<iostream>
using namespace std;
class Number{
    private:
    int value;
    public:
    Number(int v=0){
        value=v;

    }
    Number operator+(const & n){
        return Number(value + n.value);

    Number operator-(const Number& n){
            return Number(value-n.value);
        }
        Number oprator*(const Number& n){
            return Number(value*n.value);
        }
    }
};
int main(){
    Number n1(10);
    Number n2(20);
    Number sum= n1+n2;
    Number sub= n1-n2;
   // Number prod= n1*n2;

    Cout<<"addition is"<<sum;
}