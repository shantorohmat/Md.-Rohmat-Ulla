#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char str[1000],s[100];

        cin >> str;

        for(int i = strlen(str) -1,j = 0;i >= 0;i--,j++) { s[j] = str[i]; }

        cout << atoi(s) << endl;
    }
    return 0;
}


