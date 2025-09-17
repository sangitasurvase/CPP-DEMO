#include<iostream>
using namespace std;
class Student{
    int rollno;
    char name[50];
    public:
    void accept(){
        cin>>rollno;
        cin>>name;
    }
    void show(){
        cout<<"Roll no is"<<rollno<<"Name is"<<name;
    }
    ~Student(){
        cout<<"Destructor is called";
    }

};
int main (){
     
    int i n;
    cout<<"Enter no of element";
    cin>>n;
    Student* ptr=new Student();
    cout<<"accept details"<<endl;
    for(i=0;i<n;i++)
    ptr[i].accept
    
}