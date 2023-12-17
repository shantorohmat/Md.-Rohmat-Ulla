#include <iostream>
using namespace std;

class Base
{
    int x;
public:
    void set_x(int n) {x = n; }

    void show_x() { cout << x << endl; }

};
class Derrived : public Base //Base class privet is supper privet but base class public are privet  in this case
{
    int y;
public:

    void set_y(int m) { y = m; }
    void show_y() {   cout << y << endl; }

};

class Derrived_01 : private Base
{
    int z ;
public:
    void set_z(int n,int m) { set_x(n); z = m;}

    void show_z() { show_x(); cout << z << endl;  }

};

int main()
{
    Derrived ob;

    ob.set_x(10);
    ob.show_x();

    ob.set_y(78);
    ob.show_y();

    Derrived_01 oc;

   // oc.set_x(5487);
    //oc.show();


    oc.set_z(87,989);
    oc.show_z();

    return 0;

}
