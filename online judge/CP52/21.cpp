#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char s[1004];

        scanf(" %[^\n]",s);

        for(int i = strlen(s)-1 ;i >= 0;i--)
        {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
