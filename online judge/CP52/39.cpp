#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char s[1000];

        char p[1000];

        scanf( " %[^\n]",s);

        for(int i = strlen(s)-1,j =0;i >= 0;i--,j++)
        {
            p[j] = s[i];
        }

        int x = strcmp(s,p);


       if(x == 0)
        {
            cout << "Palindrome"<<endl;
        }
        else cout << "not palindrome" << endl;
    }
}
