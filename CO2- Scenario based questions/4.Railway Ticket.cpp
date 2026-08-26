#include<iostream>
using namespace std;

class RailwayTicket {
    string name, coach;
    long mobno;
    int amt,totalamt;

public:
    void accept() {
        cin >> name >> coach >> mobno >> amt;
    }

    void update() {
        totalamt = amt;
        if(coach=="First_AC") totalamt += 700;
        else if(coach=="Second_AC") totalamt += 500;
        else if(coach=="Third_AC") totalamt += 250;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Coach: " << coach << endl;
        cout << "Mobile: " << mobno << endl;
        cout << "Total Amount: " << totalamt;
    }
};

int main() {
    RailwayTicket r;
    r.accept();
    r.update();
    r.display();
}