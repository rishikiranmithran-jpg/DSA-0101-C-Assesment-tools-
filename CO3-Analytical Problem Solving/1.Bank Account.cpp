#include<iostream>
using namespace std;

class Bank {
    string name,type;
    int acc;
    double bal;

public:
    Bank(string n,int a,string t,double b) {
        name=n; acc=a; type=t; bal=b;
    }

    void deposit(int a,string n,int no) {
        if(n==name && no==acc) bal+=a;
    }

    void withdraw(int a) {
        if(a<=bal) bal-=a;
        else cout<<"Insufficient Balance\n";
    }

    void display() {
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<bal;
    }

    ~Bank() {}
};

int main() {
    Bank b("RISHI",1414,"Savings",7000);

    b.deposit(2000,"RISHI",1414);
    b.withdraw(1000);
    b.display();
}