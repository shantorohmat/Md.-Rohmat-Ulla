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
    shanto ob[4] = {shanto(78,85),shanto(97,52),shanto(89,87),shanto(45,65)};

    shanto *p;

    p =   ob;

    for(int i = 0;i < 4;i++)
    {
        cout << p->get_a() << '\t' ;
        cout << p->get_b() << '\n' ;
        p++;
    }
    return 0;
}






