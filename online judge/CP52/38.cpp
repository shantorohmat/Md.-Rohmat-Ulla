#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n,m;

        cin >> n >> m;

        /*for(int i = 0;i < ((2*n)-1);i++)
        {*/
            for(int j = 0;j <= n;j++)
            {
                for(int k = 1;k <= j;k++)
                {
                    cout << m << " ";
                }

                cout << endl;
            }

            for(int j = n;j > 0;j--)
            {
                for(int k = 1;k < j;k++)
                {
                    cout << m << " ";
                }

                cout << endl;
            }



    }
}
