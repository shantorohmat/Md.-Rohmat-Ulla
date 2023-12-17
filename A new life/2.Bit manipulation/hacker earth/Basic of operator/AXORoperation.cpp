#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#define endl "\n"
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define ll long long
#define all(v) (v).begin(),(v).end()
using namespace std;
int main()
{
    FIO;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll *a = new ll[n];
        ll m = 0;
        vector<ll>s;
        vector<ll>s1;
        for(ll i = 0;i < n;i++)
        {
            cin >> a[i];
            m = max(a[i],m);
            s.push_back(a[i]);
        }
        ll pos = log2(m);
        ll cnt = 0;
        ll ans = 0;
        for(ll j = 0;j <= pos;j++)
        {
            cnt = 0;
            for(ll i = 0;i < n;i++)
            {
                if(a[i] & (1 << j))
                {
                    cnt++;
                }
            }
            if(cnt%2)
            {
                ans = ans | (1 << j);
            }   
        }
        for(ll i = 0;i < n;i++)
        {
            ll z = a[i]^ans;
            s1.push_back(z);
        }
        sort(all(s));
		sort(all(s1));
        if(s == s1)
        {
            cout << ans << endl;
        }
        else cout << -1 << endl;
        

    }
}