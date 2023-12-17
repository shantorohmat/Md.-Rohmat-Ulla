#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll m,n;
        cin >> n >> m;
        ll ans = 0;
        
        ans = (m * ( m + 1)/2) ;
        ans += m * (n * (n+1)/2) ;
        ans -= m;

        cout << ans << endl;
    }
}