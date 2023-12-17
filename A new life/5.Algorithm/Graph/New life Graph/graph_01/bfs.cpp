#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define Max 1000
vector <int> edges[Max];
int level[Max] = {0};
int visited[Max]={0};
void bfs(int node)
{
    cout << node << " ";
    queue <int> q;
    q.push(node);
    visited[node] = 1;
    level[node] = 0;

    while(!q.empty())
    {
        int top = q.front();  
        q.pop();

        for(auto child : edges[top])
        {
            if(visited[child] == 0)
            {
                cout << child << " ";
                q.push(child);
                visited[child] = 1;
                level[child] = level[top] + 1;
            }
            
        }
    }
    cout << endl;

}
int main()
{
    int node,edge;
    cin >> node>>edge;

    for(int i = 1;i <= edge;i++)
    {
        edges[i].clear();
    }
    int k = 0;

    for(int i = 1;i <= edge;i++)
    {
        int u,v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
        // if(k == 0)
        // {
        //     k = u;
        //     break;
        // }
       
        
    }
    bfs(3);
    
}