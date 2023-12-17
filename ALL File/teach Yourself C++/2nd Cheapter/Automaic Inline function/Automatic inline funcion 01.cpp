#include <bits/stdc++.h>
using namespace std;
/// if we create a function within class that function will be automatic inline function
class shanto
{
    int a;

public:

     shanto(int a)
{
    this -> a = a;
}

void  show()
{
    cout << a << endl;
}

};


int main()
{
    shanto on(120);

    on.show();

    shanto *p;

    p = &on;

    p -> show();

    return 0;
}





