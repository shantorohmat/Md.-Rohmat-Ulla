#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int x,y;

public:

    shanto(int x,int y) { this-> x = x,this -> y = y; }
    shanto() { x = 0,y = 0;}

    void get(int &i,int &j) { i = x,j = y; }

    shanto operator+(shanto ob);

    shanto operator-(shanto ob);

    shanto operator=(shanto ob);

};

shanto shanto :: operator+(shanto ob)
{
    shanto temp;

    temp.x = x + ob.x;
    temp.y = y + ob.y;

    return temp;
}

shanto shanto :: operator-(shanto ob)
{
    shanto temp;

    temp.x = x - ob.x;
    temp.y = y - ob.y;

    return temp;
}

shanto shanto :: operator=(shanto ob)
{
    x = ob.x;
    y = ob.y;

    return *this;
}

int main()
{
    shanto ob(10,10),oc(4,5),ol;

    int x,y;

    ol = ob + oc;

    ol.get(x,y);

    cout << "(ob + oc) ol_xy : " << x << "  " << y << endl << endl;

    ol = ob - oc;

    ol.get(x,y);

    cout << "(ob - oc) ol_xy : " << x << "  " << y << endl << endl;

    ol = ob;

    ol.get(x,y);

    cout << " ol_xy : " << x << "  " << y << endl << endl;

    return 0;


}

