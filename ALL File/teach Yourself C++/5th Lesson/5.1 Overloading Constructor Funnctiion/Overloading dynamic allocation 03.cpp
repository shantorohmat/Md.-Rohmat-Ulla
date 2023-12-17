#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int n;

public:

    shanto() { n = 0;}

    shanto(int n) { this -> n = n; }

    int get() { return n;}

    ///void set(int x) { n = x;  }
};

int main()
{
    shanto *p;

    shanto ob(10);

    p = new shanto [10];

    if(!p)
    {
        cout << "Allocation Error" << endl;
        exit(1);
    }

    for(int i = 0;i < 10;i++)
    {
        p[i] = ob;
    }

    for(int i = 0;i < 10;i++)
    {
        cout << "p[" << i << "]  : " << p[i].get() << endl;
    }

}
