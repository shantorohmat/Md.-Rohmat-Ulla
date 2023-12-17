#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int x,y;

    public:

    shanto(int x = 0,int  y = 0) {this -> x  = x,this -> y = y; }

    int get(int &i,int &j) {i = x,j = y;}

    shanto  operator-()
    {
        x = -x;
        y = -y;

        return *this;
    }

    shanto  operator-(shanto op)
    {
        shanto temp;

        temp.x = op.x - x;

        temp.y = op.y - y;

        return temp;
    }

};

int main()
{
    shanto on(4,4),p(10,10),ol;

    int x,y;

    on = -on;

    on.get(x,y);

    cout << x << "  " << y <<endl;

    ol = on - p;

    ol.get(x,y);

    cout << x << "  " << y <<endl;

    return 0;
}

