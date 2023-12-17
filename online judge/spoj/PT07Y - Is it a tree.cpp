#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>v[10001];
int vis[10001];
void DFS(int d)
{
    vis[d] = 1;
    //for(int i = 0; i <= v[d].size();i++)
    for(int i : v[d])
    {

        if(vis[i] == 0)
        {
            DFS(i);
        }
    }
}
int main()
{
    int n,m,a,b,c = 0,i;
    cin >> n >> m;
    for(int i = 1;i <= m;i++)
    //while(m--)
    {
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for( i = 1;i <= n;i++)
    {
        if(vis[i] == 0){
        DFS(i);
        c++;
        }
    }
    if(c == 1&&m == n - 1)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
}
