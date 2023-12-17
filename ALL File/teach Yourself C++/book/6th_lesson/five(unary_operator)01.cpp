//post increment
#include <iostream>
using namespace std;

class coord
{
public:
    int x,y;

    coord() { }

    coord(int i,int j) { x = i,y = j; }

    coord operator++(int notuse)
    {
        x++;
        y++;


        return *this;
    }

    coord operator++()
    {
        x++;
        y++;


        return *this;
    }

    void show()
    {
        cout << x << endl << y << endl;
    }

};
int main()
{
    coord p1(4,5),p2(6,8),p3;

    p1++;

    ++p2;

    p1.show();

    p2.show();

    return 0;

}
