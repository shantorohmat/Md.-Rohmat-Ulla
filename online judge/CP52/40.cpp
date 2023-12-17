#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n,m,sum = 1,power = 1;

        cin >> n >> m;

        for(int i = 1;i <= m;i++)
        {
            power = power * n;///pow dia kora jaba na karon pow double data type nia kaj kora
            sum = sum + power;
        }

        cout << sum << endl;
    }
    return 0;
}
