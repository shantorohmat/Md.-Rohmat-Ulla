#include <iostream>
using namespace std;

class base
{
    int x;
public:
    base()  {x = 0; }

    base(int n) { x = n; }

    void set(int n) {x = n; }

    int get() { return x; }
};

int main()
{
    base *p;

    base ob(10);

    p = new base[10];

    int i;

    for(i = 0;i < 10;i++) { p[i] = ob; }

    for(i = 0; i < 10; i++)
    {
        cout << "p[" << i << "] : " << p[i].get() << endl;
    }

    return 0;
}
