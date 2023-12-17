#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1,y1,x2,y2,value;

    cin >> x1 >> y1 ;

    cout << endl;

    cin >> x2 >> y2 ;

    value = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));

    cout << fixed << setprecision(4) << value << endl;

    return 0;
}
