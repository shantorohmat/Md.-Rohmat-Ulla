#include <bits/stdc++.h>
using namespace std;
int main()
{
    double r1,r2,rr1,rr2,b,t;



    cin >> t;

    while(t--)
    {
        cin >> r1 >> r2  >> b;

        rr1 = ((r2 *1.0)/(300 - b)) * 6;

        rr2 = (((r1 - r2 + 1)*1.0) / b) * 6;

        cout.precision(2);

        cout <<fixed << rr1  << " " << fixed << rr2 << endl;
    }
    return 0;
}
