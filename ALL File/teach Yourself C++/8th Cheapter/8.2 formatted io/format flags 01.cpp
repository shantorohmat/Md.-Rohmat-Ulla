#include <bits/stdc++.h>
using namespace std;

int main()
{
     cout << "Default Value : " << endl;
     cout << 123.23 << "  " << "hello" << "  " << 100 << endl;
     cout << 10 << "  " << -10 << endl;
     cout << 100.0 << endl << endl;

     cout.unsetf(ios :: dec);
     cout.setf(ios :: hex | ios :: scientific);
     cout << 123.23 << " hello " << 100 << endl;

     cout.unsetf(ios :: hex);
     cout.setf(ios :: dec);
     cout.setf(ios :: showpos );
     cout << 10 << " " << -10 << endl;

     cout.setf(ios :: showpoint | ios :: fixed);
     cout << 100.00 << endl;

     return 0;
}
