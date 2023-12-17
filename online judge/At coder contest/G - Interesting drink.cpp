#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(auto &x : v) cin >> x;
    sort(v.begin(),v.end());

    ll t;
    cin >> t;
    while(t--)
    {
        ll x;
        cin>> x;
        ll l = -1,r = n;

        while(l < r-1)
        {
            ll mid = floor((l + (r - l)/2));
            if(v[mid] > x) r = mid;
            else l = mid;
        }
        cout << r << endl;

    }
}
