#include <iostream>
using namespace std;
int main()
{
    cout << "Number : " << '\n';

    cout << 123.10 << " hello " << 100 << endl;

    cout << 10 << " " << -10 << endl;

    cout << 100.0 << endl;

    cout.unsetf(ios :: dec);

    cout.setf(ios :: hex | ios :: scientific);

    cout << " Number : " << endl;

    cout << 123.10 << " hello " << 100 << endl;

    cout.setf(ios  :: showpos);

    cout << 10 << " " << -10 << endl;


    cout.setf(ios :: showpoint | ios :: fixed | ios :: dec);

    cout << 100.23 << endl;

    return 0;


}
