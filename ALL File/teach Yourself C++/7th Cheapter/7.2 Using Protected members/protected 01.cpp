#include <bits/stdc++.h>
using namespace std;

class base
{
    int a;

protected:

    int b;

public:

    int c;

    base(int n,int m){ a = n,b = m; }

    int geta() { return a; }

    int getb() { return b; }

};
int main()
{
    base ob(10,20);

    ob.c = 1000;

    cout << ob.geta() << " " << ob.getb() << " " << ob.c << endl;

}
