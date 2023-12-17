#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;

    double a,b;

        cin >> x >> y;

        a = x,b = y;

        if(a == 1)
        {
            a = 4.00;

            cout << "Total: R$ " << fixed << setprecision(2) << a*b<< endl;
        }
        else if(a == 2)
        {
            a = 4.50;
            cout << "Total: R$ " <<fixed << setprecision(2) <<  a*b << endl;
        }
        else if(a == 3)
        {
            a = 5.00;
            cout << "Total: R$ " << fixed << setprecision(2) << a*b<< endl;
        }
        else if(a == 4)
        {
            a = 2.00;
            cout << "Total: R$ " << fixed << setprecision(2) << a*b << endl;
        }
        else if(a == 5)
        {
            a = 1.50;
            cout << "Total: R$ " << fixed << setprecision(2) << a*b<< endl;
        }

    return 0;
}
