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
#include <queue>
#define ll unsigned long long int
#define ld long long double
using namespace std;

const int Size = 1e5;

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
int level[Size];

void bfs(int node)
{
    cout << node << " ";
    queue <int> q;
    q.push(node);
    visited[node] = 1;
   // level[node] = 0;
    while(!q.empty())
    {
        int top = q.front();
        q.pop();

        for(int child : ver[top])
        {
            if(visited[child] == 0)
            {
                cout << child << " ";
                q.push(child);
               // level[child] = level[top] + 1;
                visited[child] = 1;
            }
        }
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int node, edge;
        cin >> node  >> edge;

        for(int i = 0;i <= edge;i++)
        {
           ver[i].clear();
           visited[i] = 0;
        }

        for(int i = 0;i < edge;i++)
        {
            int u,v;
            cin >> u >> v;
            ver[u].push_back(v);
            ver[v].push_back(u);
        }
        bfs(3);


    }
}
