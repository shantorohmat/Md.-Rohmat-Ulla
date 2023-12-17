#include <iostream>
using namespace std;
class base
{
    int who;
public:
    base(int n) {who = n, cout << "Constructor....  "<< who << endl; }

    ~base() {cout << "Destructor.... " << who <<endl;  }

    int get() {return who;}

};
void fun(base ob)
{
    cout << "received.... " << ob.get()<< endl;
}

int main()
{
    base oc(1);
    fun(oc);
    return 0;
}
