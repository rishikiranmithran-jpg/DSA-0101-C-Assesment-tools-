#include<iostream>
using namespace std;

class FLOAT {
    float x;

public:
    FLOAT(float a=0) { x=a; }

    FLOAT operator+(FLOAT f) { return x+f.x; }
    FLOAT operator-(FLOAT f) { return x-f.x; }
    FLOAT operator*(FLOAT f) { return x*f.x; }
    FLOAT operator/(FLOAT f) { return x/f.x; }

    void show() { cout<<x<<endl; }
};

int main() {
    FLOAT a(10),b(5);

    (a+b).show();
    (a-b).show();
    (a*b).show();
    (a/b).show();
}