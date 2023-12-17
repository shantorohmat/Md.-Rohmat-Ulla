#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void round(double &num);

int main()
{
    double i = 100.2;

    cout << " value of  : "   << i << endl;

    cout << " value of round :  ";

    round(i);

    cout << i << endl;

    double i = 10.7;

    cout << " value of  : "   << i << endl;

    cout << " value of round  : ";

    round(i);

    cout << i << endl;

   return 0;

}

void round (double &num)
{
    double frac;
    double val;

    frac = modf(num,&val);

    if(frac < 0.5) num = val ;
    else num = val + 1.0;
}
