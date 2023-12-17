#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        int m[n];

        for(int i = 0;i < n;i++)
        {
            cin >> m[i];
        }

        for(int i = 0;i < n;i++)
        {
            for(int j = i+1;j < n;j++)
            {
                if(m[i] > m[j])
                {
                    int temp;

                    temp = m[i];
                    m[i] = m[j];
                    m[j] = temp;
                }
            }
        }

        for(int i = 0;i < n;i++)
        {
            cout << m[i] << " ";
        }
        cout << endl;

    }
    return 0;
}
