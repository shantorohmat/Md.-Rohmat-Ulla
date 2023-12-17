#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,n,m,d;

    cin >> n;

    y = n / 365;

    x = n % 365;

    m = x / 30;

    d = x % 30;

    cout << y << " ano(s)" << endl;

    cout << m << " mes(es)" << endl;

    cout << d << " dia(s)" << endl;

    return 0;

}
