#include <iostream>
using namespace std;

class coord
{
public:
    int x,y;

    coord(int i,int j) { x = i,y = j; }

    coord () { }

    coord operator+(coord ob)
    {
        coord temp;

        temp.x = x + ob.x;

        temp.y = y + ob.y;

        return temp;
    }

    coord operator+(int i)
    {
        coord temp;

        temp.x = x + i;

        temp.y = y + i;

        return temp;
    }

    void show()
    {
        cout << x <<endl << y <<endl;
    }

};

int main()
{
    coord p1(54,86),p2(45,54),p3;

    p3 = p1 + p2;

    p3.show();

    int i = 8;

    p3 =  p1 + i;

    p3.show();

    return 0;

}
