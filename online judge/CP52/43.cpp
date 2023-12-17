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
            sum =  sum * p;

        }

        int s = sum % c;

        cout <<s << endl;
    }
    return 0;
}
