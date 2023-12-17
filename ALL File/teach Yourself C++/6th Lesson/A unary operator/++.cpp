#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int x,y;

    public:

    shanto(int x = 0,int  y = 0) {this -> x  = x,this -> y = y; }

    int get(int &i,int &j) {i = x,j = y;}

    shanto  operator++()
    {
        x++;
        y++;

        return *this;
    }

    shanto  operator++(int notuse)
    {
        x++;
        y++;

        return *this;
    }

};

int main()
{
    shanto on(4,4),p(10,10);

    int x,y;

    ++on;

    on.get(x,y);

    cout << x << "  " << y <<endl;

    p++;

    p.get(x,y);

    cout << x << "  " << y <<endl;

    return 0;
}
