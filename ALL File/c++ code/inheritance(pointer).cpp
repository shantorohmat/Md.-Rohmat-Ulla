#include <iostream>
using namespace std;

class B
{
public:

    int b;

    void showB() {cout << b << endl;}

};

class d: public B
{
public:

    int d;

};

int main()
{
    B ob;

    B *p;

    p = &ob;

    p -> b = 5;

    p -> showB();

}
