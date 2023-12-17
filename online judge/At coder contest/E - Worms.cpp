#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t,sum = 0;
    cin >> n;
    vector<ll>v;
    for(ll i = 0;i < n;i++){
        ll x;
        cin >> x;
        sum += x;
        v.push_back(sum);


    }
    //for(auto x : v) cout << x << endl;
    cin >> t;
    while(t--)
    {
        ll x;
        cin>> x;
       // cout << sum<< " " << x << endl;

        ll l = -1,r = n;
        while(l < r -1)
        {
            ll mid = floor(l + (r - l)/2);
            if(v[mid] < x) l = mid;
            else r = mid;
        }
       cout << r+1 << endl;

    }
}
