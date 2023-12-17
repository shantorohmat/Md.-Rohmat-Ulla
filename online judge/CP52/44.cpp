#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        long long int s[100][100];

        for(int row = 0;row <= n;row++)
        {
            for(int col = 0;col <= row;col++)
            {
                if(col == 0) {  s[row][col] =1;}
                else if(col == row) { s[row][col] = 1;}
                else s[row][col] = s[row-1][col -1] + s[row -1][col];
            }

        }

        for(int row = 0;row <= n;row++)
        {
            for(int col = 0;col <= row;col++)
            {
                cout << s[row][col] << " ";
            }
            cout << endl;

        }

    }
    return 0;
}
