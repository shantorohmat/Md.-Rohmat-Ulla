#include <iostream>
using namespace std;

class Rectangle
{
    int length,breadth;

    public :

    Rectangle(int a,int b)
    {
        length = a,breadth = b;

    }
    Rectangle(int a)
    {
        length = breadth = a;
    }
    Rectangle()
    {
        length = breadth = 0;
    }
    void area()
    {
        cout << "Area : " << length * breadth << endl;
    }
};
int main()
{
    Rectangle a,b(10),c(10,20);
    a.area();
    b.area();
    c.area();

}
