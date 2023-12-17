#include <iostream>
using namespace std;
class Shape
{
public :
    virtual void  show()
    {
        cout << "This is shape " << endl;
    }
};
class Polygon : public Shape
{
public :
    void show()
    {
        cout << "Polygon is a shape" << endl;
    }
};
class Rectangle
{
public :
    void show()
    {
        cout << "Rectangle is a Polygon " << endl;
    }
};
class Triangle
{
public :
    void show()
    {
        cout << "Triangle is a Polygon " << endl;
    }
};
class Square
{
public :
    void show()
    {
        cout << "Square is a Rectangle" << endl;
    }
};
int main()
{
    Shape a;
    a.show();

    Polygon b;
    b.show();

    Triangle d;
    d.show();

    Rectangle c;
    c.show();

    Square e;
    e.show();

}
