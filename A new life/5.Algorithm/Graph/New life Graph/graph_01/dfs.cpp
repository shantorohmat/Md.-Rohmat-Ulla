#include <iostream>
#include <vector>
using namespace std;
#define Max 1000
vector <int> edges[Max];
int visited[Max] = {0};
void dfs(int node)
{
    cout << node << " ";
    visited[node] = 1;

    for(int i = 1;i <= edges[node].size();i++)
    {
        int d = edges[node][i];
        
        if(visited[d] == 0)
        {
            dfs(d);
        }
    }
    visited[node] = 2;

}
int main()
{
    int node,edge;
    cin >> node >> edge;

    for(int i = 1;i <= edge;i++)
    {
        int u,v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);

    }
    dfs(1);

}