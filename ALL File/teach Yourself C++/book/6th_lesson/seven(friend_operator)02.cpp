#include <iostream>
using namespace std;

class coord
{
public:
    int x,y;

    coord() { }

    coord(int i,int j) { x = i,y = j;}

    friend coord operator++(coord &ob);

    friend coord operator++(coord &ob,int oc);

    void show() { cout << x << endl << y << endl; }

};

coord operator++(coord &ob)
{   ob.x++;
    ob.y++;

    return ob;
}
coord operator++(coord &ob,int oc)
{
    ob.x++;
    ob.y++;

    return ob;

}

int main()
{
    coord p1(4,5),p2(8,9),p3;

    ++p1;

    p1.show();

    p2++;

    p2.show();

    return 0;

}
