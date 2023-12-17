#include<iostream>
using namespace std;

class point
{
    int x,y;
public:
    point(int a,int b)
    {
        x = a;

        y = b;
    }

    point() { }

    friend point operator+(int a,point ob);

    void show()
    {
        cout << "X : " << x <<  endl;

        cout << "y : " << y <<  endl;
    }


};

point operator+(int a,point ob)
{
    point temp;

    temp.x = a + ob.x;

    temp.y = a + ob.y;

    return temp;

}


int main()
{
    point p1(4,5),p2;

    int a = 7;

    operator+(a,p1);

    p2 = a + p1;

    p2.show();


}




