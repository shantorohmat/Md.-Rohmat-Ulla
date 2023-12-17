#include <iostream>
using namespace std;

class Base
{
    int j;
public:

     Base(int n) { cout << "constructor of base class " << endl;j = n;}

    ~Base() {cout << "Destructor of base class " << endl; }

    void show() { cout << j << endl; }
};
class Derived : public Base
{
    int y;
public:

    Derived(int x):Base(x)
    {
         y = x;

        cout << "constructor of derived class" << endl;
    }

    ~Derived() { cout << "destructor of derived class" << endl; }

    void show_i() { cout << y << endl; }
};

int main()
{
    Derived oc(78);

    oc.show_i();
    oc.show();

    return 0;
}
