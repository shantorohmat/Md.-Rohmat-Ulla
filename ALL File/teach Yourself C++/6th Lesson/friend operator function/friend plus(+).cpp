#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int x,y;

    public:

    shanto(int x = 0,int  y = 0) {this -> x  = x,this -> y = y; }

    void get(int &i,int &j) {i = x,j = y;}



    friend shanto  operator+(shanto b,shanto c);


};

shanto  operator+(shanto b,shanto c)
    {
        shanto temp;

        temp.x = b.x + c.x;

        temp.y = b.y + c.y;

        return temp;
    }

int main()
{
    shanto on(4,4),p(10,10),ol;

    int x,y;

    ol = on + p;

    ol.get(x,y);

    cout << x << "  " << y <<endl;



    return 0;
}


