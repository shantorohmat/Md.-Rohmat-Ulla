#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int count = 0;

        char s[10000];

        scanf(" %[^\n]",s);

        int d = strlen(s);

        for(int i = 0;i < d;i++)
        {
            if(s[i] == ' ')
            {
                count++;
            }
        }
        cout << "Count = " <<  count + 1 << endl;
    }
    return 0;
}
