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
    ll t;
    cin >> t;


    for(ll i = 1;i <= t;i++)
    {
        ll n,k;


    cin >> n >> k;
    vector <ll>v(n);

    for(auto &x : v)
    {
        cin >> x;
    }
    sort(v.begin(),v.end());


        cout << "Case " << i << ":" << endl;

        while(k--){

        ll x,y;
        cin >> x >> y;


        ll l = -1,r = n;

        while(l < r -1)
        {
            ll mid  = floor(l + (r - l)/2);

            if(v[mid] > y) r = mid;
            else l = mid;
        }
        //cout << r << " ";
        ll h = r;

        l = -1,r = n;

        while(l < r -1)
        {
            ll mid = floor((l+r)/2);

            if(v[mid] < x) l = mid;
            else r = mid;
        }
        cout  << h - r << endl;
        }
    }
}

