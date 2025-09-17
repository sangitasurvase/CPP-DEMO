#include <iostream>
using namespace std;

class Demo
{
private:
    int dd, mm, yy;

public:
    void accept()
    {
        cout << "Enter the Date (dd mm yyyy): ";
        cin >> dd >> mm >> yy;
    }

    void display()
    {
        cout << "Date is : " << dd << "/" << mm << "/" << yy << endl;
    }

    // void setDd(int d)
    // {
    //     dd = d;
    // }

    int getMm()
    {
        return mm;
    }
};

int main()
{
    Demo obj;
    obj.accept();
    obj.display();


    // obj.setDd(22);      // Sets the day to 22
    // obj.display();      // Displays updated date

    cout << "Month is : " << obj.getMm() << endl;

    return 0;
}
