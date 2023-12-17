
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
char  arr[100][100];
int visited[100][100];
int node,edge;


int cnt ;
void dfs(int i,int j)
{


    if(arr[i+1][j] == '.' && visited[i+1][j] == 0 && i+1< node )
    {
        visited[i+1][j] = 1;
        cnt++;
        dfs(i+1,j);
    }

    if(arr[i][j+1] == '.' && visited[i][j+1] == 0 && j+1< edge )
    {
        visited[i][j+1] = 1;
        cnt++;
        dfs(i,j+1);
    }

    if(arr[i-1][j] == '.' && visited[i-1][j] == 0 && i -1>= 0 )
    {
        visited[i-1][j] = 1;
        cnt++;
        dfs(i-1,j);
    }

   if(arr[i][j-1] == '.' && visited[i][j-1] == 0 && j -1>= 0 )
    {
        visited[i][j-1] = 1;
        cnt++;
        dfs(i,j-1);
    }
}

int main()
{
    int t;
    cin >> t;
    for(int i = 1;i <= t;i++){

    cin  >> edge >> node;///  col >>> row

    for(int j = 0;j < node;j++){

   for(int i = 0;i < edge;i++)
    {
        char u ;
        cin >> u;
        arr[j][i] = u;

    }

}
 memset(visited,0,sizeof(visited));



     for(int i = 0;i < node;i++ )
    {
        for(int j = 0;j < edge;j++)
        {
           if( arr[i][j] == '@')
           {

               cnt = 0;
               visited[i][j] = 1;
               dfs(i,j);

           }

        }


    }


    cout << "Case " << i << ": " <<  cnt+1 << endl;
    }



}
