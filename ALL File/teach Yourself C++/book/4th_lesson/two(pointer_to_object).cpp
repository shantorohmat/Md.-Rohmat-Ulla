#include <iostream>
using namespace std;

class base
{
    int a,b;
public:
    base(int n,int m) {a = n,b = m; }
    void show() {cout << a  << '\t' << b << endl; }

};

int main()
{
    base ob[4] = {base(4,5),base(7,8),base(8,10),base(88,45)};

    base *p;

    p = ob;

    for(int i = 0;i < 4;i++)
    {
        p -> show();
        p++;

    }
}
