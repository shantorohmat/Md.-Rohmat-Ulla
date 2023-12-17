#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#define ll long long int
#define ld long long double
#define INF 999999
const int Size = 10000;

using namespace std;

int mod = 1e9+7;
int fast()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 0;
}

int fix_mod(int a,int b)
{
    return (((a&b) + b)%b);
}

int mod_add(int a,int b)
{
    return (a%mod + b%mod) % mod;
}

int add(int a,int b)
{
    if(a < 0) a += mod;
    if(b < 0) b += mod;
    if(a+b >= mod) return a+b-mod;
    return a+b;
}
ll gcd(ll a,ll b)
{
    if(b == 0LL) return a;
    return gcd(b,a%b);
}
ll arr[Size];
vector <ll>ver[Size];
ll visited[Size];
ll cnt ,sum1 ;
void dfs(ll s)
{
    visited[s] = 1;
    sum1 += arr[s];
    cnt++;
    for(auto x : ver[s])
    {
        if(visited[x] == 0)
            dfs(x);
    }
}


int main()
{
    fast();
    int t;
    cin >> t;
    for(int i = 1;i <= t;i++)
    {


        ll node,edge;
        cin >> node >> edge;
        ll sum = 0;

        for(ll i = 0;i < node;i++)
        {
            cin >> arr[i];
            sum += arr[i];

        }



        for(ll i = 0;i < edge;i++)
        {
            ll u,v;
            cin >> u >> v;
            u--,v--;

            ver[u].push_back(v);
            ver[v].push_back(u);


        }
        ll k = 0;
        ll avg = sum / node;


        for(ll i = 0;i < node;i++)
        {

                sum1 = 0;
                cnt = 0;

            if(visited[i] == 0)
            {

                dfs(i);
                if(sum1%cnt != 0)
                {
                    k  = 1;
                    break;
                }
                else{
                    if(avg != sum1/cnt)
                    {
                        k = 1;
                        break;
                    }
                }
            }
        }

        if(k) cout << "Case " << i << ": " << "No" << endl;
        else cout << "Case " << i << ": " << "Yes" << endl;

        for(ll i = 0;i <= Size;i++) ver[i].clear();

         memset(visited,0,sizeof(visited));
    }
}
