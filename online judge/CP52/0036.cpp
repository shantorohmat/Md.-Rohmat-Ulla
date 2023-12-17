#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        string *s = new string [n];

        string temp;

        for(int i = 0; i < n;i++)
        {
            cin >> s[i];
        }
        int j = 0;
        bool sh;
        while(sh)
        {
            sh = false;
            j++;
            for(int i = 0;i < n - j;i ++)
            {
                if(s[i] > s[i+1])
                {
                    temp = s[i];
                    s[i] = s[i+1];
                    s[i+1] = temp;
                    sh = true;

                }
            }
        }

        for(int i = 0;i < n;i++)
        {
            cout << s[i] << endl;
        }
    }
}
