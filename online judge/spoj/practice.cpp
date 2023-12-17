#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int vis[1000004];
int col[1000004];
vector<int>v[1000004];


bool DFS(int n,int d)
{
    vis[n] = 1;
    col[n] = d;
    //for(int i = 0;i <= v[n].size();i++)
   for(int i : v[n])
    {
        cout<< endl << " x: " << i<< endl;
        cout << endl << n << " : " << v[n].size() << endl;
        if(vis[i] == 0)
        {
            bool res = DFS(i,!d);
            if(res == false)
                return false;

        }
        else if(col[n] == col[i])
            return false;
    }
    return true;
}
int main()
{
    int t,n,m,a,b,i;
    cin >> t;
    for(int j =1;j <= t;j++)
    {
        cin >> n >> m;//n = node and m = index

        for(i = 1;i  <= n;i++)
            v[i].clear(),vis[i] =0;

        for(i = 1;i <= m;i++)
        {
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);

        }
        bool flag = true;
        for(i = 1;i <= n;i++)
        {
            if(vis[i] == 0){
            bool res = DFS(i,0);

            if(res == false)
            {
                flag = false;

            }
            }
        }


    }
}

