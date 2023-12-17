#include<iostream>
using namespace std;

class Base
{
    int a;
public:
    Base(int n) {a = n;}
    void show_a() {cout << a << endl;  }
};

class Derived:public Base
{
    int b;
public:
    Derived(int n,int m):Base(n) { b = n;}
    void show_b() {cout << b << endl; }

};
class Derived_01:public Derived
{
    int c;
public:
    Derived_01(int x,int y ,int z):Derived(y,z)
    {
        c = x;
    }
    void show_c() {cout << c << endl; }
};

int main()
{
    Derived_01 ob(45,85,96);

    ob.show_a();
    ob.show_b();
    ob.show_c();
    return 0;
}
