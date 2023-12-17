#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char s[100];

        scanf(" %[^\n]",s);

        int count[26];

        for(int i = 0;i < 26;i++)
        {
            count[i] = 0 ;
        }

        for(int i = 0;i < strlen(s);i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                count[s[i] - 'a']++;
            }
        }

        for(int i = 0; i < 26;i++)
        {
            if(count[i] != 0)
            {
                char l = i + 'a';

                cout << l << " = " << count[i] << endl;
            }
        }
    }
    return 0;
}
