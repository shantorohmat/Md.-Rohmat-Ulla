///12,14,15
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m;

    cin >> t;

    while (t--){

    int c2 = 0,c5 = 0;

    cin >> m;

    while(1)
    {
        int n = m;

        while(n % 2 == 0 || n % 5 ==0)
        {

            if(n % 2 == 0)
            {
                n = n / 2;
                c2++;
            }


            if(n % 5 == 0)
            {
                n = n / 5;

                c5++;

            }


        }
        m--;
        if(m == 0) break;

    }

    if(c2 > c5) cout << c5 << endl;
    else cout << c2 << endl;

    }
    return 0;
}
