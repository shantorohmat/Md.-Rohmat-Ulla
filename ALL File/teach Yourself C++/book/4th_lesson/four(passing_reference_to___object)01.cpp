#include <iostream>
using namespace std;

class base
{
    int x;
public:

    base(int n) { x = n,cout << "cons...." << x << endl; }
    ~base() { cout << "dest...." << x << endl;}
    int id() { return x; }
};
void fun(base &oc)
{
    cout << "received...." << oc.id() << endl;
}
int main()
{
    base ob(4);

    fun(ob);

    return 0;

}
