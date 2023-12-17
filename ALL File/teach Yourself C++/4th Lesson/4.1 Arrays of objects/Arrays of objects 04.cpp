#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int a,b;

public:

    shanto(int a,int b) { this -> a = a; this -> b = b; }

    int get_a() { return a;}

    int get_b() { return b;}
};

int main()
{
    shanto ob[4][2] = {shanto(78,85),shanto(97,52),shanto(89,87),shanto(45,65),
                                     shanto(7,5),shanto(7,2),shanto(9,8),shanto(4,5)};

    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 2;j++)
        {

        cout << ob[i][j].get_a() << '\t' ;
        cout << ob[i][j].get_b() << '\n' ;

        }
    }
    return 0;
}






