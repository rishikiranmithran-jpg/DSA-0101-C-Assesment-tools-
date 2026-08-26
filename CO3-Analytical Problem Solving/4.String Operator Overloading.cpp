#include<iostream>
using namespace std;

class String {
    string s;

public:
    String(string x) { s=x; }

    bool operator==(String x) { return s==x.s; }
    bool operator>(String x) { return s>x.s; }
    bool operator<(String x) { return s<x.s; }
};

int main() {
    String a("Apple"),b("Banana");

    cout << (a==b) << endl;
    cout << (a>b) << endl;
    cout << (a<b);
}