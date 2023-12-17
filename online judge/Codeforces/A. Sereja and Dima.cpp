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
#include <functional>
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
int main()
{
   vector<int>v;
   int n,s = 0,m = 0;
   cin >> n;
   for(int i = 0;i < n;i++)
   {
       int a;
       cin >> a;
       v.push_back(a);
   }
   int i = 1;
   while(!v.empty())
   {

       int c = v.front();
       int d = v.back();
       if(c < d)
       {
           if(i%2)
                s += d;
           else
                m += d;
           auto it = find(v.begin(),v.end(),d);
           v.erase(it);
           i++;
       }
       else
       {
           if(i%2)
                s += c;
           else
                m += c;
           auto id = find(v.begin(),v.end(),c);
           v.erase(id);
           i++;
       }

   }
   cout << s << " " << m << endl;

}

