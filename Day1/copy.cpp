#include<iostream>
using namespace std;
class cdate{
    int dd,mm,yy;
    public:
    cdate(int d,int m,int y){

        dd=d;
        mm=m;
        yy=y;
    }
    cdate(cdate & d_new){
        this->dd=d_new.dd;
        this->mm=d_new.mm;
        this->yy=d_new.yy;
    }
    void show(){
        cout<<dd<<mm<<yy;
    }
};
int main (){
    cdate c(1,2,2025);
    cdate c1(c);
    c1.show();
}