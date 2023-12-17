#include <iostream>
using namespace std;
class rectangle
{
    int length,breadth;

public:

    void area();
    virtual void perimeter();
    rectangle(int a,int b);


};

 rectangle :: rectangle(int a ,int b)
    {
        length = a;
        breadth = b;

    }


void rectangle :: area()
{
    cout << "Area : " << (length*breadth) << endl;
}
void rectangle :: perimeter()
{
    cout  <<"rectangle perimeter : " <<  2 * (length * breadth) << endl;
}

class square: public rectangle
{
    int s;

public :

    square(int n): rectangle(n,n)
    {
        s = n;

        cout << "Square : " << s*s << endl;
    }
    void perimeter_s()
    {
        cout << "Square perimeter : " << 4*s << endl;
    }
};

int main()
{
    //rectangle a(10,10),b;
    square c(10);//,d;
   /* b.area();
    b.parameter();
    a.area();
    a.parameter();*/
    c.area();
    c.perimeter();
    c.perimeter_s();
    //d.area();
    //d.parameter();



}
