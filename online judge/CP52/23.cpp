#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char s[100];

        scanf(" %[^\n]",s);

        for(int i = 0;s[i]!= '\0';i++)
        {
            if( s[i] >= 'A' && s[i] <= 'Z')
            {
                cout << s[i] -'A' + 1;
            }
        }
        cout << endl;
    }
    return 0;
}
