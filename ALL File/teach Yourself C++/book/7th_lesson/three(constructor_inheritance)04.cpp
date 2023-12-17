#include <iostream>
using namespace std;

class Base
{
    int j;
public:
    Base(int x) { j = x; cout << "constructor of base class "<< endl; }
    ~Base() { cout << "destructor of base class " << endl; }
    void show()  { cout << j << endl;}
};

class Derived: public Base
{
public:
    Derived(int n): Base(n) { cout << "constructor of derived class" << endl;}
    ~Derived() { cout << " destructor of derived class" << endl;}

};

int main()
{
    Derived oc(78);
    oc.show();
    return 0;

}
