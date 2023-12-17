#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <vector>
#include <map>
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


int edge[9][3]={
            {1,2,28},
            {1,6,10},
            {2,3,16},
            {2,7,14},
            {3,4,12},
            {4,5,22},
            {4,7,18},
            {5,6,25},
            {5,7,24}
            };

int set[8]={-1,-1,-1,-1,-1,-1,-1,-1};

int included[9]={0,0,0,0,0,0,0,0,0};


void Union(int u,int v)
{
    if(set[u] < set[v])
    {
        set[u] = set[u] + set[v];
        set[v] = u;

    }
    else {
        set[v] = set[u] + set[v];
        set[u] = v;
    }
}

int Find(int u)
{
    int x = u;

    while(set[x] > 0)
    {
        x = set[x];

    }
    return x;
}
int t[3][7];

int main()
{
    int i = 0,j = 0,k = 0,u = 0,v = 0,min = I,n = 9;


    while(i < 6)
    {
        min = I;

        for(j = 0;j < n;j++)
        {
            if(included[j] == 0 && edge[j][2] < min)
            {
                u = edge[j][0];
                v = edge[j][1];
                min = edge[j][2];
                k = j;
            }
        }
        if(Find(u)!= Find(v))
        {
            t[0][i] = u;
            t[1][i] = v;
            t[2][i] = edge[i][2];

            Union(Find(u),Find(v));
            included[k]=1;

            i++;
           // printf("%d %d %d %d\n",u,v,find(u),find(v));

        }
        else
        {
            included[k]=1;
        }
    }
    cout << "Spanning Tree\n" << endl;

    int sum = 0;

   for(i=0;i<6;i++)
   {
     cout << "(" << t[0][i] << "," << t[1][i] << "," << t[2][i] <<")" << endl;
     sum += t[2][i];

   }
  cout << endl;
  cout << sum << endl;
    return 0;

}
