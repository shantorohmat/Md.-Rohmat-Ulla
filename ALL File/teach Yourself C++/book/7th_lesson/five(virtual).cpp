#include <iostream>
using namespace std;

class Base
{
public:
    int i;
};

class Derived:virtual public Base
{
public:
    int j;
};

class Derived_01:virtual public Base
{
public:
    int k;
};
class Derived_02:public Derived_01, public  Derived
{
public:
    int product() { return i*j*k; }
};
int main()
{
    Derived_02 ob ;
    ob.i = 10;
    ob.j = 10;
    ob.k = 10;

    cout << ob.product() << endl;
}
