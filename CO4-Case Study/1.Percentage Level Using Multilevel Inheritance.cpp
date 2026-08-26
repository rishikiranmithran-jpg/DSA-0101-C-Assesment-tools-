#include<iostream>
using namespace std;

class Marks {
protected:
    int a,b,c;
public:
    void get() {
        cin>>a>>b>>c;
    }
};

class Total: public Marks {
protected:
    int total;
public:
    void calc() {
        total=a+b+c;
    }
};

class Percentage: public Total {
public:
    void show() {
        calc();
        cout<<"Total = "<<total<<endl;
        cout<<"Percentage = "<<total/3.0<<"%";
    }
};

int main() {
    Percentage p;
    p.get();
    p.show();
}