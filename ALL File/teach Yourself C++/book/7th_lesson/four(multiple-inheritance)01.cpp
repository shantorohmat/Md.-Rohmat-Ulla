#include<iostream>
using namespace std;

class Base
{
    int a;
public:
    Base(int n) {a = n;}
    void show_a() {cout << a << endl;  }
};

class Base_01
{
    int b;
public:
    Base_01(int n) { b = n;}
    void show_b() {cout << b << endl; }

};
class Derived:public Base,public Base_01
{
    int c;
public:
    Derived(int x,int y ,int z):Base(y),Base_01(z)
    {
        c = x;
    }
    void show_c() {cout << c << endl; }
};

int main()
{
    Derived ob(45,85,96);

    ob.show_a();
    ob.show_b();
    ob.show_c();
    return 0;
}
