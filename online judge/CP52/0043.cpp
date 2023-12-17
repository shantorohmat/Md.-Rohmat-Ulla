#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int p,q,c,sum = 1;

        cin >> p >> q >>  c;

        for(int i = 1;i <=  q;i++)
        {
            sum =  (sum * p) % c;
        }



        cout << sum << endl;
    }
    return 0;
}

