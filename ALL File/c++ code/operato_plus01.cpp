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

    point operator+(point ob)
    {
        point temp;

         temp.x = x * ob.x;
         temp.y =  y * ob.y;

        return temp;
    }

    void show()
    {
        cout << x << endl  << y << endl;
    }

};
int main()
{
    point p1(4,5),p2(5,6),p3;

      p3 = p1 + p2;
      p3.show();


    return 0;
}
