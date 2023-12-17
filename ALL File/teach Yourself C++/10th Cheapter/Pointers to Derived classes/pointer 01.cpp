#include <bits/stdc++.h>
using namespace std;

class base
{
    int x;

public:

    void set_x(int x) { this -> x = x; }
    int get_x() { return x; }
};
class derived : public base
{
    int y;

public:

    void set_y(int y) {   this -> y = y; }
    int get_y() { return y; }
};

int main()
{
     base *p;

    base ob;

    derived oc;

    p = &ob;

    p->set_x(10);

     cout << " Base Value : " <<  p->get_x() << endl;

    p = &oc;

    p->set_x(99);


    oc.set_y(88);

    cout << " Base Value : " <<  p->get_x() << " " << "Derived Value : " << oc.get_y() << endl;
}
