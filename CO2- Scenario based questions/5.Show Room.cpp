#include<iostream>
using namespace std;

class ShowRoom {
    string name;
    long mobno;
    double cost,dis,amount;

public:
    void input() {
        cin >> name >> mobno >> cost;
    }

    void calculate() {
        if(cost <= 10000) dis=5;
        else if(cost <= 20000) dis=10;
        else if(cost <= 35000) dis=15;
        else dis=20;

        amount = cost - cost*dis/100;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Mobile: " << mobno << endl;
        cout << "Amount: " << amount;
    }
};

int main() {
    ShowRoom s;
    s.input();
    s.calculate();
    s.display();
}