#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int x,y;

public:

    void get(int &i,int &j)
    {
        i = x,j = y;
        ///x = i,y = j;
    }

    shanto(int x = 0,int y = 0)
    {
        this ->x = x;
        this ->y = y;

        ///cout << " constructor" << endl;
    }


    shanto operator+(shanto ob)
    {
        shanto temp;

        temp.x = x + ob.x;
        temp.y = y + ob.y;

        return temp;
    }

    ///~shanto(){ cout << " destructor" << endl; }
};

int main()
{
    shanto ob(4,5),oc(10,10),ol;

    int x,y;

    ob.get(x,y);

    cout << " ob_xy : "<<  x << " " <<y << endl << endl;

    oc.get(x,y);

    cout << " oc_xy : " <<  x << " " <<y << endl << endl;

    ol.get(x,y);

    cout << "ol_xy "  <<  x << " " <<y << endl << endl;

    ol = ob + oc;

    ol.get(x,y);

    cout << " (ob + oc) ol_xy : " <<  x << " " <<y <<   endl<<endl;

    return 0;

}
