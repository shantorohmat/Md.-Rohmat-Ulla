#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,o,p,q,r,s;

    cin >> n;

    cout << n/100 << " nota(s) de R$ 100,00" << endl;

    m = n % 100;

    cout << m / 50  << " nota(s) de R$ 50,00" << endl;

    o = m % 50;

    cout << o / 20 << " nota(s) de R$ 20,00" << endl;

    p = o % 20;

    cout << p / 10 << " nota(s) de R$ 10,00"<< endl;

    q = p % 10;

    cout << q / 5 << " nota(s) de R$ 5,00" << endl;

    r = q % 5;

    cout << r / 2 << " nota(s) de R$ 2,00" << endl;

    s = r % 2;

    cout << s / 1 << " nota(s) de R$ 1,00" << endl;

    return 0;

}
