#include <iostream>
#include <vector>
using namespace std;
#define MAX 100000
vector <int> edges[MAX];
vector <int> cost[MAX];
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
    cout << "output : " << endl;
    for(auto i = 1;i <= edge;i++)
    {
        cout << i << "->" ;
        for(auto j = 1; j < edges[i].size();j++)
        cout  << edges[i][j] << " ";
        cout << endl;
      
    }
    


}