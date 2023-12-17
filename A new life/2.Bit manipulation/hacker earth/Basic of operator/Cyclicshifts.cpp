#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned short n,m;
        char c;
        cin >> n >> m >> c ;
        // bitset<16>b(n);
        // cout << b<< endl;
        if(c == 'L')
        {
            unsigned short x = n << m;
            // bitset<16>b1(x);
            // cout << b1<< endl;
            unsigned short y=n>>(16-m);
            // bitset<16>b2(y);
            // cout << b2<< endl;
            n=x|y;
            // bitset<16>b3(n);
            // cout << b3<< endl;
            cout << n << endl;
        }
        else if(c == 'R')
        {
            unsigned short x = n >> m;
            // bitset<16>b1(x);
            // cout << b1<< endl;
            unsigned short y=n<<(16-m);
            // bitset<16>b2(y);
            // cout << b2<< endl;
            n=x|y;
            // bitset<16>b3(n);
            // cout << b3<< endl;
            cout << n << endl;
        }
        
    }
    return 0;
}