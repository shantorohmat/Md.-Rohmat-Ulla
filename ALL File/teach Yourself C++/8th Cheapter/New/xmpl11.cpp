#include <iostream>
using namespace std;

int main()
{
    cout.width(10);

    cout << "hello" << endl;

    cout.fill('*');

    cout.width(10);

    cout << "hello" << endl;

    cout.setf(ios :: left);

    cout.width(10);

    cout << "hello" << endl;

    cout.width(10);///It has to show every output

    cout.precision(10); /// we can use only one then then it effects every point

    cout << 123.234567 << endl;

    cout.width(10);

    //cout.precision(6);

    cout << 123.234454546546356563 << endl;



    return 0;

}
