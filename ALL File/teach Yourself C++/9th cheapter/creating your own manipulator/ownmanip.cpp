#include <iostream>
#include <iomanip>
using namespace std;

ostream &setup(ostream &stream)
{
    stream.width(10);
    stream.precision(4);
    stream.fill('*');
    stream.left;

    return stream;
}

ostream &preci(ostream &stream)
{
    stream.fixed ;
    stream.precision(5);

    //setf(ios :: hex);

    return stream;
}

int main()
{
    cout << setup  << 2656.564545 << endl;
    cout << preci << 2656.566264 << endl;

}
