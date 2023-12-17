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
const int Size = 1e4+7;

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
vector<int>ver[Size];
int visited[1000];
int k = 0;
int dfs(int s)
{
//    cout << s << " ";
    visited[s] = 1;
    for(int i = 0;i < ver[s].size();i++)
    {
        int d = ver[s][i];
        if(visited[d] == 1)
            k = 1;
        if(visited[d] == 0)
        dfs(d);
    }
}

int main()
{
    fast();
    memset(visited,0,sizeof(visited));
    int node,edge;
    cin >> node >> edge;
    for(int i = 0;i < edge;i++)
    {
        int u,v;
        cin >> u  >> v;
        ver[u].push_back(v);
        ver[v].push_back(u);

    }
    dfs(1);
    if(k == 1 && node-1 == edge ) cout << "YES" << endl;
    else cout << "NO" << endl;


}
