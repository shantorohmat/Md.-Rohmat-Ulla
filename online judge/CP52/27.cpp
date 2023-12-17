#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int m,s = 0,rim,temp,n;

        cin >> m;

        n = m;

        for(int i = 0;i < 3;i++)
        {

            temp = n / 10;

            rim = n % 10;

            n = temp;

            s = rim * rim * rim + s;
        }

        if(s == m) cout << m << " is an armstrong number!" << endl;

        else cout << m << " is not an armstrong number!" << endl;
    }

    return 0;
}
