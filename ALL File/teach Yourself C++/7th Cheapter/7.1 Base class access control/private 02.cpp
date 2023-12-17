#include <bits/stdc++.h>
using namespace std;

class base
{
    int x;

public:

    void set_x(int x) { this -> x = x; }
    void show_x() {cout << x << endl; }

};

class derived: private base
{
    int y;

public:

    void set_y(int y) {this -> y = y; }
    void show_y() { cout << y << endl; }

};

int main()
{
    derived ob;

    ob.set_x(10);
    ob.show_x();
}
