#include<iostream>
using namespace std;

class movieMagic {
    int year;
    string title;
    float rating;

public:
    void accept() {
        cin >> year;
        cin.ignore();
        getline(cin,title);
        cin >> rating;
    }

    void display() {
        cout << title << endl;
        if(rating <= 2.0) cout << "Flop";
        else if(rating <= 3.4) cout << "Semi-hit";
        else if(rating <= 4.5) cout << "Hit";
        else cout << "Super Hit";
    }
};

int main() {
    movieMagic m;
    m.accept();
    m.display();
}