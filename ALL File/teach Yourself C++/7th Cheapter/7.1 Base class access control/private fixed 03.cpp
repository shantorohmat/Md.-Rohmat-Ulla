#include <bits/stdc++.h>
using namespace std;

class base
{
    int x;

public:

    void set_x(int x) { this -> x = x;}

    void show_x() { cout << x << endl;}
};

class derived : private base
{
    int y;

public:

    void set_xy(int x,int y) { set_x(x),this -> y = y; }
    void show_xy() { show_x(),cout << y << endl; }

};
int main()
{
    derived ob;
    //ob.set_x(45);
    //ob.show_x();

    ob.set_xy(10,20);
    ob.show_xy();
}
