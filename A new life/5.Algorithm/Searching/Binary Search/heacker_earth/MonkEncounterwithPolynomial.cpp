#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int

// upper bound
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b,c , k;
        cin >> a >> b >> c >> k;
        ll low = 0,high = 100000;
        
        ll ans = -1;
        while(low <= high)
        {
            ll mid = (high + low)/2;
            ll val = (a *(mid * mid)) + (b * mid) + c; 
            if( val >= k)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << ans << endl;
    }
}