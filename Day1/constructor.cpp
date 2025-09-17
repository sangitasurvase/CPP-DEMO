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
     void display(){
        cout<<"display the date:"<<dd<<mm<<yy;
 }
     
};
// cdate::cdate(int d, int m,int y){
//      dd=d;
//      mm-m;
//      yy=y;

// void cdate::display(){
//      cout<<"display the date:"<<dd<<mm<<yy;
// }
int main ()
{
    cdate c1(1,2,2025);
    c1.display();
}