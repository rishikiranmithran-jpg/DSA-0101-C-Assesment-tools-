#include<iostream>
using namespace std;

class BookFair {
    string Bname;
    double price;

public:
    void Input() {
        cin.ignore();
        getline(cin,Bname);
        cin >> price;
    }

    void calculate() {
        if(price <= 1000) price -= price*0.02;
        else if(price <= 3000) price -= price*0.10;
        else price -= price*0.15;
    }

    void display() {
        cout << Bname << endl;
        cout << "Price = " << price;
    }
};

int main() {
    BookFair b;
    b.Input();
    b.calculate();
    b.display();
}