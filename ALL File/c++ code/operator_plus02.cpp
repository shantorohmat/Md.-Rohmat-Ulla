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
    point () { }

    point operator+(int a)
    {
        point temp;

        temp.x = x + a;

        temp.y = y + a;

        return temp;
    }
    void show()
    {
        cout << "X : " << x << endl;;

        cout << "y : " << y << endl;
    }

};
int main()
{
    point p1(4,5);

    int a = 7;

    point  p3 = p1 + a;

    p3.show();

    return 0;
}


