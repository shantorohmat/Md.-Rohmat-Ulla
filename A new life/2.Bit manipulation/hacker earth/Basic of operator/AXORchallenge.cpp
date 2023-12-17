#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll c; 
    cin >> c; // c = 13

    ll pos = log2(c); // c length check pos = 3 as it is 0 index. 0 1 2 3
    ll a = 0;
    ll b = 0;

    if(c & (1<<pos)) // checks c's (pos)3'rd bit is set or not.
    {
        a += (1ll << pos); // sets pos(3rd) bit is one
    }
    else 
    {
        a +=(1ll << pos); // sets pos(3rd) bit is one
        b +=(1ll << pos); // sets pos(3rd) bit is one
    }
    for(ll i = pos - 1;i>=0;i--)
    {
        if(c & (1<<i))
        {
            b += (1ll << i);
        }
        else 
        {
            a += (1ll << i);
            b += (1ll << i);
        }
    }

    cout << a * b << endl;
}