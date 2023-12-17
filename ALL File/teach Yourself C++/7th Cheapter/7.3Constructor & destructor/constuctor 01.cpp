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
public:
    derived() { cout << " derived constructor" << endl;}
    ~derived() { cout << " derived destructor" << endl; }
};

int main()
{
    derived o;

    return 0;
}
