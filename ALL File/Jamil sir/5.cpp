#include <iostream>
using namespace std;
class shape
{
public :
    void show();
};
void shape :: show()
{
    cout << "This is a shape" << endl;
}

class Rectangle : public shape
{
public:
    void show_a()
    {
        cout << "This is a rectangle shape" << endl;

    }

};
class Circle : public shape
{
public:
    void show_b()
    {
        cout << "This is a circle shape" << endl;
    }

};

class Square : public Rectangle
{
public :
    void show_s()
    {
        cout << "Square is rectangle" << endl;
    }
};
int main()
{
    Square s;
    s.show();//shape
    s.show_a();//rectangle
    //s.show_s();// square
    //s.show_b();// circle

}
