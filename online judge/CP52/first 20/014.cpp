#include <bits/stdc++.h>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    int t,T;

    cin >> t;

    T = 2 * t;

    while(T--)
    {
        char s[10000];

        char  p[1];

        long int count = 0;

        scanf(" %[^\n]",s);

        scanf("%s",&p);

        for(int i = 0;i < strlen(s);i++)
        {
            if(p[0] == s[i])
            {
                count++;
            }

        }
        if(count > 0)
        cout << "Occurrence of " << "'"<< p<< "'" << " in " << "'" <<s << "'"  << " = "<< count << endl;
        else
        cout << "'" << p << "'" << " is not present" << endl;
    }
    return 0;
}
