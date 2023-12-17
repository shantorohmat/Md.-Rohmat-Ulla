#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int a;

public:

    shanto(int a);

    void show();
};

inline shanto :: shanto(int a)
{
    this -> a = a;
}

inline void shanto :: show()
{
    cout << a << endl;
}

int main()
{
    shanto on(120);

    on.show();

    shanto *p;

    p = &on;

    p -> show();
}





