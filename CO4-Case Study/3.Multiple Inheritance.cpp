#include<iostream>
using namespace std;

class Worker {
protected:
    int code;
    string name;
    float salary;
public:
    void get() {
        cin>>code>>name>>salary;
    }
};

class Officer {
protected:
    float DA,HRA;
public:
    void get2() {
        cin>>DA>>HRA;
    }
};

class Manager: public Worker, public Officer {
    float TA,gross;
public:
    void calculate() {
        TA=0.10*salary;
        gross=salary+DA+HRA+TA;
    }

    void show() {
        cout<<"TA = "<<TA<<endl;
        cout<<"Gross Salary = "<<gross;
    }
};

int main() {
    Manager m;
    m.get();
    m.get2();
    m.calculate();
    m.show();
}