#include<iostream>
using namespace std;

class point
{
public:
    int x,y;

    point(int a,int b)
    {
        x = a;

        y = b;
    }

    point() { }

    bool operator==(point ob)
    {
        if(x == ob.x && y == ob.y) { return true; }

        else return false;

    }


};
int main()
{
    point p1(4,8),p2(4,8);

    if(p1 == p2)
    {
        cout << "Equal" << endl;
    }
    else cout << " Not Equal" << endl;

}





