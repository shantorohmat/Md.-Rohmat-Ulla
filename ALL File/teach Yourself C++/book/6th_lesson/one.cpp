#include <iostream>
using namespace std;

class coord
{
public:
    int x,z,y;

    coord(int i,int j,int k) { x = i,y = j,z = k; }

    coord() { }

    coord operator+(coord ob)
    {
        coord temp;

        temp.x = x + ob.x ;
        temp.y = y + ob.y;
        temp.z = z + ob.z;

        return temp;
    }

    void show()
    {
        cout << x  << endl << y << endl << z <<  endl;
    }
};

int main()
{
    coord p1(78,85,56),p2(4,54,6),p3;

    p3 = p1 + p2 + p1 + p2;

    p3.show();

    return 0;

}
