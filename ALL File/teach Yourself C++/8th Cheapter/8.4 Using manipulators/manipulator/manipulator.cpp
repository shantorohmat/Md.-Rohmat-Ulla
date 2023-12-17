///setw() || setfill() || setprecision(n) means after . n-1 elements
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << setfill('*');
    cout << setw(10) << 10000 << endl;
    cout << setw(10) << 1000 << endl;
    cout << setfill(' ');
    cout << setw(10) << 100 << endl;
    cout << setw(10) << 10 << endl;

    cout << setprecision(5) <<(double)22/7 <<endl;

    cout << setbase(8) << 65 << endl;

    cout << setfill('*');

    cout << setw(12) << setiosflags(ios:: left) << "shanto" << endl;
    cout << setw(12) << setiosflags(ios:: left) << "akhi" << endl;


    cout << setiosflags (ios :: oct) << 65 << endl;
    cout << setiosflags (ios :: hex) << 65 << endl;
    cout << setiosflags (ios :: dec) << 65 << endl;

    cout << setiosflags (ios :: showpoint) << (double)22/7 <<endl;
    /*cout << setiosflags (ios :: pos) << 65 << endl;
    cout << setiosflags (ios :: pos) << 65 << endl;*/

    return 0;

}
