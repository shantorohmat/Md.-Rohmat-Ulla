#include <iostream>
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
    while(t--){
    ll n;
    cin >> n;
    vector<ll>a(40);
    
    ll k=1;
    for(int i=0;i<40;i++)
    {
        a[i]=k;
        k*=3ll;
    }
    ll pos = (ll)log2(n) + 1;
    set<ll>v;
    for(int i = 0;i < pos;i++ )
    {
        if(n & (1ll << i))
        {
            v.insert(a[i]);
        }
    }
    cout << v.size() << endl;
    for(auto i : v)
    cout << i  << " ";
    cout<< endl;
    }
    
}