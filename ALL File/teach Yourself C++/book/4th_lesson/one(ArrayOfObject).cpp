#include <iostream>
using namespace std;

class base
{
    int a;
public:
    void set_a(int n) { a = n; }
    int get_a() { return a; }

};
int main()
{
    base ob[4];

    int m = 90;
    for(int i = 0;i < 4;i++,m = m + 48) { ob[i].set_a(m); }

    for(int i  = 0;i < 4;i++) {cout << ob[i].get_a() << endl; }

    cout << endl;

    return 0;
}
