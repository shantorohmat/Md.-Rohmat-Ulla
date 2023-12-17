#include <iostream>
using namespace std;
class coord
{
public:

    int x,y;

    coord(int i,int j) { x = i,y = j; }

    coord () { };

    coord operator+(coord ob)
    {
        coord temp;

        temp.x = x + ob.x;

        temp.y = y + ob.y;

        return temp;
    }

    coord operator-(coord ob)
    {
        coord temp;

        temp.x = x - ob.x;

        temp.y = y - ob.y;

        return temp;
    }

    coord operator=(coord ob)
    {

       x = ob.x;

       y = ob.y;

        return *this;

    }

    void show()
    {
        cout << " x :  " << x << '\t' << " y : " <<  y << endl;
    }

};

int main()
{
    coord p1(45,45),p2(47,43),p3;

    p3 = p1 + p2;

    p3.show();

    //coord p1(45,45),p2(4,5),p3;

    p3 = p1 - p2;

    p3.show();

    //coord p1(45,45),p2(45,45),p3;

   p3 = p2;

   p3.show();


}
