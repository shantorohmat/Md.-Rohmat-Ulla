#include <bits/stdc++.h>
using namespace std;

void showflags();

int main()
{
    showflags();

    cout.setf(ios :: oct | ios :: showbase | ios :: fixed );

    showflags();

    return 0;
}
void showflags()
{
    ios :: fmtflags f;

    f = cout.flags();

    if(f & ios :: skipws) cout<< " skipws on " << endl;

    else cout << " skipws off " << endl;

    if(f & ios :: left) cout<< " left on " << endl;

    else cout << " left off " << endl;

    if(f & ios :: right) cout<< " right on " << endl;

    else cout << " right off " << endl;

    if(f & ios :: internal) cout<< " internal on " << endl;

    else cout << " internal off " << endl;


}

