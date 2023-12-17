#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
// upper bound
#define ll long long int 
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll *a = new ll[n];
        ll *b = new ll[n];

        for(ll i = 0;i < n;i++)
        {
            cin >> a[i];
        }
        for(int i = 0;i < n;i++)
        {
            cin >> b[i];
        }
        ll ans = 0;
		for(int i=0;i<n;i++)
		{
			ll low = 0 , high = n-1 , mid;
			ll p = -1;
			while(low <= high)
			{
				mid = (low+high)/2;
				if(b[mid] >= a[i])
				{
					p = mid;
					low = mid + 1;
				}
				else
				{
					high = mid - 1;
				}
			}
			ans = max(ans,p - i);
		}
        
        cout << ans << endl;
    }
}