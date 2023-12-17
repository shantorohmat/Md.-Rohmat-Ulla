#include <bits/stdc++.h>
using namespace std;

int main()
{    int t;

    cin >> t;

    while(t--)
    {
        char s[10000];

        char p[10000];

        cin >> s;

        for(int i = strlen(s)-1,j = 0;i >= 0;i--,j++)
        {
            p[j] = s[i];

        }
        int count = 0;
        for(int i = 0;s[i] != '\0';i++)
        {
            if(s[i]!= p[i]) count++;
        }
        if(count == 0) cout << "palindrome" << endl;

        else cout <<"not palindrome" <<endl;
    }
}
