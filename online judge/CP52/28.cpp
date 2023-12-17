#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n,count ;

        cin >> n;

        int s[n];

        for(int i = 0;i < n;i++)
        {
            cin >>  s[i];
        }
        s[n] = '\0';///most important part end of line

        if(s[0] < s[1]){
                count = 0;

        for(int i = 0;i < n;i++)
        {
            if(s[i] < s[i+1])
            {
                count++;
            }
        }
        if(count == (n -1))
        {
            cout << "YES" <<  endl;
        }
        else  {cout << "NO" << endl; }
        }
        else if(s[0] > s[1])
        {
            count = 0;
            for(int i = 0;i < n;i++)
        {
            if(i+1 == 5) break;
            if(s[i] > s[i+1])
            {
                cout << "i : " << i << "i+1 : " << i+1  << endl;
                count++;
                cout << count << endl;
            }
        }
        if(count == (n -1))
        {
            cout << "YES" <<  endl;
        }
        else cout << "NO" << endl;


        }
    }
    return 0;
}
