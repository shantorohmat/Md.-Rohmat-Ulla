#include <iostream>
using namespace std;

class coord
{
public:
    int x,y;

    coord(int i,int j) { x = i,y = j; }

    coord() { }

    coord operator-(coord ob)
    {
        coord temp;
        temp.x = x - ob.x;
        temp.y = y - ob.y;

        return temp;
    }

     coord operator-()
    {
        x = - x;
        y = - y;

        return *this;
    }
    void show()
    {
        cout << x << endl << y <<endl;
    }




};

int main()
    {
        coord p1(14,45),p2(45,445),p3;

        p3 = p1 - p2;

        p3.show();

        p3 = -p1;

        p3.show();

        return 0;


    }
