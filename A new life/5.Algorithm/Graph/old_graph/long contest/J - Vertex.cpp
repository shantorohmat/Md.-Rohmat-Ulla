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
const int Size = 100000;

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
int arr[Size];
vector <int>ver[Size];
int visited[Size];

void dfs(ll s)
{


    visited[s] = 1;

    for(auto x : ver[s])
    {
        if(visited[x] == 0)
            dfs(x);
    }
}


int main()
{
    fast();
    ll u,v,t;
    string c,s;
    cin >> t;



     for(ll i=1;i<=t;i++)
    {

      cin >> c;
      ll n = c[0] - 64;



    getline(cin,s);
    while(getline(cin,s))
    {
        if(s.size() == 0){

           break;
        }
           u = s[0] - 65;
           v = s[1] - 65;
          ver[u].push_back(v);
          ver[v].push_back(u);
      }
       int cnt = 0;

      for(ll i = 0;i  < n;i++)
      {
          if(visited[i] == 0)
          {

              dfs(i);
              cnt++;
          }
      }
      cout << cnt << endl;


      if(i != t)
        cout << endl;




        memset(visited,0,sizeof(visited));
        for(ll i = 0;i <= Size;i++) ver[i].clear();


    }

}
