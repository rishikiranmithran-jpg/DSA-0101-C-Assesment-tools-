#include<iostream>
using namespace std;

class Item {
protected:
    int no;
    string name;
    float price;

public:
    void get() {
        cin>>no>>name>>price;
    }
};

class DiscountedItem: public Item {
    float discount;

public:
    void calculate() {
        cin>>discount;
        price=price-price*discount/100;
    }

    void show() {
        cout<<no<<" "<<name<<" "<<price<<endl;
    }

    float amount() {
        return price;
    }
};

int main() {
    int n;
    float total=0;
    cin>>n;

    while(n--) {
        DiscountedItem d;
        d.get();
        d.calculate();
        d.show();
        total+=d.amount();
    }

    cout<<"Total = "<<total;
}