#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        long long int a,b,c;

        cin >> a >> b >> c;

        for(int i = a; i <= b;i++)
        {
            if(i % c == 0)
            {
                cout << i << endl;
            }
        }
        cout << endl;
    }
    return 0;
}
