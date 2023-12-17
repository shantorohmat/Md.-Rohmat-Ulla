#include <bits/stdc++.h>
using namespace std;
#define V 5
int TSP(int graph[][V], int s)
{
    vector<int> vertex;
    for (int i = 0; i < V; i++)
        if (i != s)
            vertex.push_back(i);
    int min_path = INT_MAX;
    do {
        int cp = 0;
        int k = s;
        for (int i = 0; i < vertex.size(); i++) {
            cp += graph[k][vertex[i]];
            k = vertex[i];
        }
        cp += graph[k][s];
        min_path = min(min_path, cp);

    } while (
        next_permutation(vertex.begin(), vertex.end()));

    return min_path;
}

// Driver Code
int main()
{

    int graph[5][5] = { {5,7,3,5,10},
                       {8,14,6,3,4},
                       {11,7,3,4,3},
                       {0,0,0,0,0},
                       {0,0,0,0,0}
                       };
    int s = 0;
    cout << TSP(graph, s) << endl;
    return 0;
}
