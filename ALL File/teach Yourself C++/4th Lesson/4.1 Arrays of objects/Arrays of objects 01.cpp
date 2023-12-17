#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int a;

public:

    void set(int a) { this -> a = a; }

    int get() { return a;}
};

int main()
{
    shanto ob[4];

    for(int i = 0,k = 13;i < 4;i++,k = k + 10)
    {
        ob[i].set(k);

    }

    for(int i = 0,k = 13;i < 4;i++,k = k + 10)
    {
        cout << ob[i].get() << '\t' ;

    }
    cout << endl;

    return 0;
}
