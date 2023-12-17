#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s[6];

    double count = 0,sum = 0;

    for(int i = 0;i < 6;i++)
    {
        cin >> s[i];

    }

    for(int i = 0;i < 6;i++)
    {
        if(0 < s[i])
        {
            count ++;

            sum = sum + s[i];
        }

    }

    cout << count << " valores positivos"<< endl << fixed << setprecision(1) << (sum/count) << endl;

    return 0;
}

