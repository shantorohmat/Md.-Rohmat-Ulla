#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int node,edge;
    cin >> node >> edge;
    int in[100] = {};
    int out[100] = {};
    
    for(int i = 1;i <= edge;i++)
    {
        int u,v;
        cin >> u >> v;
        out[u]++;
        in[v]++;
    }
  
    for(int i = 1;i <= node ;i++)
    {
       
            cout << "In degree of " << i << " :" << in[i] << endl;
            cout << "out degree of " << i << " :" << out[i] << endl;
        

    }
    


}