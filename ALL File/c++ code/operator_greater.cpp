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

       bool operator>(point ob)
       {
           if (x > ob.x || y > ob.y) { return 1; }

           else return 0;
       }
};

int main()
{
    point p1(5,5),p2(8,8);

    if(p1 > p2)
    {
        cout << "Greater" << endl;
    }
    else cout << " not greater" << endl;

    return 0;
}
