#include <bits/stdc++.h>
using namespace std;

class base
{
public:
    base() { cout << "Base constructor" << endl; }
    ~base()  { cout << "Base destructor" << endl; }
};
class derived: protected base /// private as same as protected and private
{
    int i;
public:
    derived(int i) { this -> i = i; cout <<"derived constructor" << endl;}
    ~derived() { cout << "derived destructor" << endl; }
    void show() { cout << i << endl; }

};

int main()
{
    derived o(10);
    o.show();

    return 0;
}

