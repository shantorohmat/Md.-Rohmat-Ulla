#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int a;

public:

    shanto(int a) { this -> a = a; }

    int get() { return a;}
};

int main()
{
    shanto ob[4] = {78,85,97,52};

    for(int i = 0;i < 4;i++)
    {
        cout << ob[i].get() << '\t';
    }
    cout << endl;

    return 0;
}

