#include <iostream>
using namespace std;

class coord
{
public:
    int x,y;

    coord() { }

    coord(int i,int j) { x = i,y = j; }

    friend coord operator+(coord ob,coord oc);

    void show()
    {
        cout << x << endl << y << endl;
    }



};

coord operator+(coord ob,coord oc)
{
    coord temp;

    temp.x = ob.x + oc.x;
    temp.y = ob.y + oc.y;

    return temp;

}

int main()
{
    coord p1(4,5),p2(5,6),p3;

    p3 = p1 + p2;

    p3.show();


    return 0;


}




