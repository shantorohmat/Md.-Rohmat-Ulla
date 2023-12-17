#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    double a,b,c,avg;

    cin >> n;

    for(int i = 0;i < n;i++)
    {
        cin >> a >> b >> c;

        avg = (((a) * 2.0) + ((b) * 3.0) + ((c) * 5.0))/10.0;

        cout << fixed << setprecision(1) << avg << endl;

    }
    return 0;
}
