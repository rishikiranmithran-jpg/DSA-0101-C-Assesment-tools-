#include<iostream>
using namespace std;

class books {
    string title,author,publisher;
    float price;
    int stock;

public:
    books(string t,string a,float p,string pub,int s) {
        title=t; author=a; price=p;
        publisher=pub; stock=s;
    }

    void search(string t,string a,int n) {
        if(t!=title || a!=author) {
            cout<<"Book not available";
        }
        else if(n>stock) {
            cout<<"Required copies not in stock";
        }
        else {
            cout<<"Book Available\n";
            cout<<"Total Cost = "<<price*n;
            stock-=n;
        }
    }
};

int main() {
    books b("C++","Bjarne",800,"Pearson",12);

    b.search("C++","Bjarne",4);
}