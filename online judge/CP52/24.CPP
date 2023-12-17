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

        int s[n];

        for(int i =0 ;i < n;i++)
        {
            cin >> s[i];
        }
        s[n] = '\0';

       for(int i = 0;i < n;i=i+2)
       {
           cout << s[i] << " ";
       }
       s[n] = '\0';

       cout << endl;


    }
    return 0;
}
