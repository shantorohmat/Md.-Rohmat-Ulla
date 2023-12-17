/*
nCr = n!/((n-r)! * r!)
*/
#include <iostream>
using namespace std;
#define ll long long int
const ll mod = 1e9+7;
ll f[1000011];
void fact()
{
    f[0] = 1;
    for(ll i = 1;i < 1000011;i++)
    {
        f[i] = (f[i-1]%mod * i%mod)%mod;

    }
}
/*
3^3 = 3^2 *  res = 3
3^2 = 3^1 * n = 9
*/
ll exp(ll  n,ll r)
{
    ll res = 1;
    while(r>0)
    {
        if(r%2 == 1)
        {
            r = r-1;
            res = (res%mod * n%mod)%mod;


        }
        else if(r%2 == 0)
        {
            r = r/2;
            n = (n%mod*n%mod)%mod;


        }
    }
    return res;
}
ll farmat(ll n)
{
    return exp(n,mod-2);
}
ll nCr(ll n,ll r)
{
	fact();
	ll fact1 = f[n];
    ll fact2 = f[r];
    ll fact3 = f[n-r];
   
    /*
    nCr = n!/((n-r)! * r!)
    */
    ll res = ((fact1 * farmat(fact2))%mod * farmat(fact3))%mod;
    return res;
	
}
int main()
{
    fact();
    ll n,r;
    cin >> n >> r;
    ll res = nCr(n,r);
    
    cout << res << endl;


}
