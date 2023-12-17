#include <iostream>
using namespace std;

class Base
{
    int x;
public:
    void set_x(int n)  { x = n; }

    void show_x()  { cout << x << endl; }

};

class Derrived :public Base //Base class privet is supper privet but base class public are public in this case
{
    int y;
public:
    void set_y(int n )  { y = n; }

    void show_y() {cout << y  << endl; }

    //x = 10;
};

int main()
{
    Derrived ob;

    ob.set_x(10);
    ob.show_x();

    ob.set_y(90);
    ob.show_y();

    return 0;
}
