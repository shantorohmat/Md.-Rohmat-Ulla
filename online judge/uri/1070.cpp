#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s[6];

    cin >> n;

    for(;n % 2 == 0;n++)
    {
        if(n % 2 != 0)
        {
            s[0] = n;
            for(int i = 1;i < 6;i++)
            {
                n = n + 2;
                s[i] = n;
            }
        }
    }

    if(n % 2 != 0)
    {
        for(int i = 0;i < 6;i++)
        {

            s[i] = n;
             n = n + 2;
        }
    }

    for(int i = 0;i < 6;i++)
    {
        cout << s[i] << endl;
    }


    return 0;

}
