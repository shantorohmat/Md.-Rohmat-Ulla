#include <iostream>
using namespace std;

class Base
{
protected :
    int a,b;
public:
    void set_ab(int n,int m) { a = n, b = m;}
};
class Derrived :public Base
{
int c;;
public:
    void set_c(int n) { c = n; }

    void show() { cout << a  << endl << b << endl  << c << endl; }
};

int main()
{
    Derrived ob;

    ob.set_ab(45,78);
    ob.set_c(456);
    ob.show();
}
