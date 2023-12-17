#include <iostream>
using namespace std;

class Base
{
public:

    Base() {cout << "Constructor of base class" << endl; }
    ~Base() {cout << "destructor of base class" << endl; }
};

class Derrived : public Base
{
    int j;
public:

    Derrived(int n)
    {
        cout << "constructor of derived "<< endl;
         j = n;
    }
    ~Derrived() {cout << "Destructor of derived " << endl; }
    void show() {cout << j << endl; }
};

int main()
{
    Derrived oc(45);
    oc.show();

    return 0;

}
