#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n ;

        cin >> n;

        int s[n];

        for(int i = 0;i < n;i++)
        {
            cin >> s[i];
        }

        int m;

        cin >> m;

        int p[m];

        for(int i = 0;i < m;i++)
        {
            cin >> p[i];
        }

        int q[n + m];

        for(int i = 0,j = 0,k = 0;i < (n+m);)
        {
            if(i < n)
            {
                q[j] = s[i];
                i++;
                j++;
            }
            else if(i >= n && i < (m+n) )
            {

                q[j] = p[k];
                j++;
                i++;
                k++;
            }
        }
        for(int i = 0;i < (m+n);i++)
        {
            cout << q[i] << " " ;
        }
        cout << endl;

          int temp;
    for(int i = 0; i < (m+n);i++)
    {
    for(int j = i+1; j < (m+n);j++)
        {
            if(q[i] > q[j])
            {
                temp = q[i];
                q[i] = q[j];
                q[j] = temp;
            }
        }
    }

        for(int i = 0;i < (m+n);i++)
        {
            cout << q[i] << " " ;
        }
        cout << endl;

    }
    return 0;
}
