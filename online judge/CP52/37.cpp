#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >>   t;

    while(t--)
    {
        int n;

        cin >> n;

        int rev = 0;

        while(n != 0)
        {
            rev = rev * 10;
            rev = rev + n % 10;
            n = n / 10;
        }
        cout << rev << endl;
    }
    return 0;
}
