#include <iostream>
#include <cmath>
using namespace std;
void fun(double &num)
{
    double frac;
    double val;

    frac = modf(num,&val);

    if(frac < 0.5) { num = val; }

    else num = val + 1.0;
}

int main()
{
    double i = 100.4;

    cout << i << endl;

    fun(i);

    cout << i << endl;

    i = 10.9;

    fun(i);

    cout << i << endl;

    return 0;
}
