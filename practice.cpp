#include <iostream>
#include <fstream>
#include <vector>
#include <stdexcept>
using namespace std;

class Item {
public:
    int itemID;
    string itemName;
    double price;
    int stock;

    Item(int id=0, string name="", double p=0, int s=0) {
        if(p < 0 || s < 0) throw invalid_argument("Negative price or stock not allowed");
        itemID = id; itemName = name; price = p; stock = s;
    }
};

class Bill {
public:
    int billID;
    string customerName;
    vector<pair<Item,int>> purchased; // item + quantity

    Bill(int id=0, string cname="") : billID(id), customerName(cname) {}

    // add item to bill
    Bill& operator+(pair<Item*,int> p) {
        if(p.second <= 0) throw invalid_argument("Quantity must be positive");
        if(p.second > p.first->stock) throw runtime_error("Not enough stock!");
        p.first->stock -= p.second; // reduce stock
        purchased.push_back({*p.first, p.second});
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Bill& b) {
        if(b.purchased.empty()) throw runtime_error("Bill is empty!");
        os << "\nBill ID: " << b.billID << "\nCustomer: " << b.customerName << "\n";
        double total = 0;
        for(auto &pr : b.purchased) {
            double amt = pr.first.price * pr.second;
            os << pr.first.itemName << " x" << pr.second << " = " << amt << "\n";
            total += amt;
        }
        os << "Total = " << total << "\n";
        return os;
    }

    void save() {
        ofstream fout("bills.txt", ios::app);
        fout << "BillID:" << billID << " Customer:" << customerName << "\n";
        for(auto &pr : purchased) {
            fout << pr.first.itemName << "," << pr.second << "," << pr.first.price << "\n";
        }
        fout << "----\n";
        fout.close();
    }
};

int main() {
    try {
        // Inventory
        vector<Item> items = {
            Item(1, "Laptop", 50000, 5),
            Item(2, "Mouse", 500, 10),
            Item(3, "Keyboard", 1000, 7)
        };

        // Load old bills
        ifstream fin("bills.txt");
        if(fin) {
            cout << "Previous bills:\n";
            string line;
            while(getline(fin, line)) cout << line << "\n";
            fin.close();
        }

        // New bill
        Bill b1(101, "Rahul");
        b1 + make_pair(&items[0], 1); // 1 Laptop
        b1 + make_pair(&items[1], 2); // 2 Mouse

        cout << b1; // print bill
        b1.save();  // save bill
    }
    catch(exception &e) {
        cout << "Error: " << e.what() << endl;
    }
}