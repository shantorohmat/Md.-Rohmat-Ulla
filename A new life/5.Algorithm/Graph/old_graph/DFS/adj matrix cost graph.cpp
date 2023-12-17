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
const int Size = 1e8;

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

int main()
{
    int arr[100][100];
    for(int i = 1;i <= 100;i++)
    {
        for(int j = 1;j <= 100;j++)
        {
            arr[i][j] = 999;
        }
    }
    int node,edges;
    cin >> node >> edges ;

    for(int i = 0;i < edges;i++)
    {
        int u,v,cost;
        cin >> u >> v >> cost;
        arr[u][v] = cost;/// directed graph

    }
    for(int i = 1;i <= node;i++ )
    {
        for(int j = 1;j <= node;j++)
        {
            cout  << arr[i][j] << " ";
        }
        cout << endl;
    }
}
/*
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

