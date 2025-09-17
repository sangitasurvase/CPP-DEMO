#include <iostream>
using namespace std;

class Number {
    int value;

public:
    // Constructor
    Number(int v = 0) {
        value = v;
    }

    // Overload + operator
    Number operator + (const Number& n) {
        return Number(value + n.value);
    }

    // Overload - operator
    Number operator - (const Number& n) {
        return Number(value - n.value);
    }

    // Overload * operator
    Number operator * (const Number& n) {
        return Number(value * n.value);
    }

    // Overload == operator
    bool operator == (const Number& n) {
        return value == n.value;
    }

    // Overload << operator for cout
    friend ostream& operator << (ostream& out, const Number& n) {
        out << n.value;
        return out;
    }
};

int main() {
    Number n1(10), n2(5);

    Number sum = n1 + n2;       // Uses overloaded +
    Number diff = n1 - n2;      // Uses overloaded -
    Number prod = n1 * n2;      // Uses overloaded *
    
    cout << "n1 + n2 = " << sum << endl;      // Uses overloaded <<
    cout << "n1 - n2 = " << diff << endl;
    cout << "n1 * n2 = " << prod << endl;

    if (n1 == n2)
        cout << "n1 and n2 are equal" << endl;
    else
        cout << "n1 and n2 are NOT equal" << endl;

    return 0;
}