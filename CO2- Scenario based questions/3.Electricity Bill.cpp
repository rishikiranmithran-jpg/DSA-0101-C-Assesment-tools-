#include<iostream>
using namespace std;

class ElectricBill {
    string n;
    int units;
    double bill;

public:
    void accept() {
        cin >> n >> units;
    }

    void calculate() {
        if(units <= 100)
            bill = units * 2;
        else if(units <= 300)
            bill = 100*2 + (units-100)*3;
        else {
            bill = 100*2 + 200*3 + (units-300)*5;
            bill += bill*0.025;
        }
    }

    void print() {
        cout << "Name: " << n << endl;
        cout << "Units: " << units << endl;
        cout << "Bill: " << bill;
    }
};

int main() {
    ElectricBill e;
    e.accept();
    e.calculate();
    e.print();
}