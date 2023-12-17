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
#define I INT_MAX
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
int cost[][8]=
 {{I,I,I,I,I,I,I,I},
 {I,I,25,I,I,I,5,I},
 {I,25,I,12,I,I,I,10},
 {I,I,12,I,8,I,I,I},
 {I,I,I,8,I,16,I,14},
 {I,I,I,I,16,I,20,18},
 {I,5,I,I,I,20,I,I},
 {I,I,10,I,14,18,I,I}};


int near[8]={I,I,I,I,I,I,I,I};
int t[2][6];

int main()
{
    int i,j,k,u,v,min = I,n = 7;
    /// find out minimum value from graph
    for( i = 1;i <= n;i++)
    {
        for( j = i;j <= n;j++)
        {
            if(cost[i][j] < min)
            {
                min = cost[i][j];
                u = i;
                v = j;
            }
        }
    }

    t[0][0] = u,t[1][0] = v;

    near[u] = near[v] = 0;

    /// fill up near table
    for(i = 1;i <= n;i++)
    {
        if(near[i] != 0)
        {

        if(cost[i][u]<cost[i][v])
        {
            near[i] = u;
        }
        else{
            near[i] = v;
        }

        }
    }
    ///repeating step
    for(i = 1; i < n - 1; i++)
    {
        min = I;
        /// find out minimum value from graph
        for(j = 1;j <= n ;j++)
        {
            if(near[j] != 0 && cost[j][near[j]] < min)
            {
                k = j;
                min = cost[j][near[j]] ;
            }

        }
        t[0][i] = k;
        t[1][i] = near[k];
        near[k] = 0 ;
        /// fill up near table
        for(j = 1; j <= n;j++)
        {
            if(near[j] != 0 && cost[j][k] < cost[j][near[j]] )
            near[j] = k;
        }
    }
    int sum = 0 ;
    for(int i = 0; i < n - 1;i++)
    {
        cout << "(" << cost[t[0][i]][t[1][i]] << ")" << endl;
        sum += cost[t[0][i]][t[1][i]];

    }
    cout << sum << endl;
}
