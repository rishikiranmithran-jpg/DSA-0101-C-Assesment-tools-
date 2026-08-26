#include<iostream>
using namespace std;

class Person {
protected:
    string name,address;
    long phone;
public:
    void getPerson() {
        cin>>name>>address>>phone;
    }
};

class Employee: public Person {
    int eno;
public:
    void get() {
        getPerson();
        cin>>eno;
    }
    void show() {
        cout<<eno<<" "<<name<<" "<<address<<" "<<phone<<endl;
    }
};

class Manager: public Person {
    string des,dept;
    float salary;
public:
    void get() {
        getPerson();
        cin>>des>>dept>>salary;
    }
    float sal() { return salary; }
    void show() {
        cout<<name<<" "<<des<<" "<<dept<<" "<<salary<<endl;
    }
};

int main() {
    Employee e;
    Manager m;

    e.get();
    m.get();

    cout<<"Employee:\n";
    e.show();

    cout<<"Manager:\n";
    m.show();
}