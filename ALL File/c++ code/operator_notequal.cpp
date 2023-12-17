#include<iostream>
using namespace std;

class point
{
public:
    int x,y;

    point(int a,int y)
    {
        x = a;

        y = y;
    }
    point () { }

    operator!=(point ob)
    {
        if(x != ob.x || y != ob.y) return true;
        else return false;
    }
};
int main()
{
    point p1(4,4),p2(5,5);

    if(p1 != p2) cout << "not equal" <<endl;

    else cout << " equal" << endl;

    return 0;
}
