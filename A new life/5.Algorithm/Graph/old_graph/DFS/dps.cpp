
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
const int Size = 1e2;

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
int visited[Size];
int parrent[Size];
int cy = 0;

void path(int d)
{
    if(d == 0) return ;

     path(parrent[d]);
     cout << d << " ";
}

void dfs(int s)
{
    cout << s << " ";
    visited[s]= 1;

    for(int i = 0;i < ver[s].size();i++ )
    {
        int d = ver[s][i];

         if(visited[d] ==1 )
        {
           cy = 1;
        }
        if(visited[d] == 0)
        {
            parrent[d] = s;
            dfs(d);
        }
    }
    visited[s] = 2;
}

int main()
{
    int node,edge;
    cin >> node >> edge;

    for(int i = 0;i < edge;i++)
    {
        int u,v,cost = 1;
        cin >> u >> v;
        ver[u].push_back(v);
        ver[v].push_back(u);

    }
    dfs(1);
    cout << endl;
    for(int i = 1;i <= node;i++)
    {
        cout << i << "__>" << parrent[i] << endl;
    }
    cout << "path of " << 5 << endl;
    path(5);

    if(cy) cout << endl<< "cycle detected" << endl;
}
/*
6 8
1 2
1 4
2 5
2 4
3 5
3 6
6 6
4 5

4 6
1 4 5
1 3 7
1 2 3
2 1 3
3 2 2
3 4 4
edges - 6
nodes - 4(1,2,3,4)
*/


