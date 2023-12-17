#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n,found ;

        cin >> n;

        int m[n];

        for(int i = 0;i < n -1;i++)
        {
            cin >> m[i];
        }

        for(int i = 1;i <= n;i++)
        {
            found = 0;
            for(int  j = 0;j < n;j++)
            {
                if(i == m[j])
                {
                    found = 1;
                    break;
                }

            }
            if(found == 0)
            {
                cout << i << endl;
                break;
            }

        }

    }
    return 0;
}
