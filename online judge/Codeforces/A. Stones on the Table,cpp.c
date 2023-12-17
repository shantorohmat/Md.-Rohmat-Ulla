#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,f = 0,j = 0,k = 0;
    scanf("%d ",&n);
    string s;
    cin >> s;

    for(int i = 0;i < n;i++)
    {
        if(s[i] == 'G')
        {
            if(f == 0) g = 0;
            f = 1;
            j = 0;
            k = 0;
            g++;
        }
        if(s[i] == 'R')
        {
            if(j == 0) r = 0;
            f = 0;
            j = 1;
            k = 0;

            r++;
        }
        if(s[i] == 'B')
        {
            if(k == 0) b = 0;
            f = 0,j = 0;
            k = 1;

            b++;
        }
    }
    int mx = max(g,r);
    int fx = max(mx,b);

    cout << fx - 1 << endl;


                                                                                                                                                                    `   1
}

