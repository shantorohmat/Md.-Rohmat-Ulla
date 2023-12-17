#include <iostream>
using namespace std;
int main()
{
    int mat[100][100];
    int node,edge;
    cin >>  edge;

    for(int i = 1;i <= edge;i++)
    {
        int node_1,node_2,cost;
        cin >> node_1 >> node_2 >> cost;
        mat[node_1][node_2] = cost;
        mat[node_2][node_1] = cost;
    }

    for(int i = 1;i <= edge;i++)
    {
        for(int j = 1;j <= 3;j++ )
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}