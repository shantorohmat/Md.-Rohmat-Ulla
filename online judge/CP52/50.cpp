#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char s[50];

        cin >> s;

        int no_out = 1;

        for(int i = 0;i < strlen(s);i++)
        {
            if(s[i] == 'L' && s[i+1] == 'R' ) {
                    no_out = 0;
                    break;
            }
            else if(s[i] == 'R' && s[i+1] == 'L') {
            no_out = 0;
            break;
            }
            else{
            if(s[i] == 'L') s[i] = s[i-1];
            else if(s[i]== 'R') s[i] = s[i+1];
            }


        }
        for(int i = 0;i < strlen(s);i++)
        {
            if(no_out == 0) {break; }
            cout << s[i];
        }
        if(no_out == 0) break;
        cout << endl;
    }
}
