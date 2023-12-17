#include <iostream>
using namespace std;

class Base
{
    int k;
public:
    Base(int n) { k = n;cout << "constructor of base class " << endl; }
    ~Base() { cout << "destructor of base class " << endl; }
    void show_k()  { cout << k  << endl; }
};

class Derived: public Base
{
    int j;
public:
    Derived(int m,int n): Base(n) { j = m; cout << "constructor of derived class " << endl;}
    ~Derived() {  cout << "Destructor of derived class " << endl;}
    void show_j() { cout << j << endl; }
};

int main()
{
    Derived oc(84,85);

    oc.show_k();
    oc.show_j();

    return 0;
}
