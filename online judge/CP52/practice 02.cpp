#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char s[100],p[100];

        cin >> s >> p;

        int count = 0;

        for(int i = 0;s[i] != '\0' && p[i] != '\0';i++ )
        {
            if(s[i] > p[i] || s[i] < p[i])
            {
                cout << s[i] <<" " << p[i]<<endl;
                count++;
                break;
            }
        }
        if(count == 0) cout << "equal" << endl;

        else cout << "not equal" << endl;
    }
}
