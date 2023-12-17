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

vector<int>edge[Size];
vector<int>cost[Size];
int main()
{


    int node,edges;
    cin >> node >> edges ;

    for(int i = 0;i < edges;i++)
    {
        int u,v,costs = 1;
        cin >> u >> v >> costs ;
       edge[u].push_back(v);
//       edge[v].push_back(u);
       cost[u].push_back(costs);
//       cost[v].push_back(costs);

    }


//    cout << "adj list : " << endl;
//
//    for(int i = 1;i <= node;i++ )
//    {
//        cout  <<i << "-->" ;
//
//        for(int j = 0;j < edge[i].size();j++)
//        {
//            cout  << edge[i][j] << " " ;
//        }
//        cout << endl;
//    }


    cout << "cost of adj list : " << endl;

     for(int i = 1;i <= node;i++ )
    {
        cout  <<i << "-->" ;

        for(int j = 0;j < cost[i].size();j++)
        {
            cout  << "(" << cost[i][j]<< ")" ;
        }
        cout << endl;
    }
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



