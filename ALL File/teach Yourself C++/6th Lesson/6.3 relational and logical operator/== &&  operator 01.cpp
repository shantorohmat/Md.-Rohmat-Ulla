#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int x,y;

public :

    shanto(int x = 0,int y = 0) { this -> x = x, this -> y = y; }

    int operator==(shanto ob);

    int operator&&(shanto ob);

};

int shanto :: operator==(shanto ob)
{
    return x == ob.x && y == ob.y;
}

int shanto :: operator&&(shanto ob)
{
    return (x && ob.x) && (y && ob.y);
}

int main()
{
    shanto ob(10,10),oc(10,10),ol;

    int x,y;

    if(ol == oc) cout << "ob same as oc" << endl;

    else cout << "ob isn't same as oc" << endl;

    if(ol && oc) cout << "true" << endl;

    else cout << "false" << endl;

    return 0;
}
