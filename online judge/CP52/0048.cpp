#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin>> t;

    while(t--)
    {
        int n,m;

        int arr[100001];

        cin >> n;

        for(int i = 1;i <= n;i++) {arr[i] = 0;}

        for(int i = 0;i < n -1;i++)
        {
            cin >> m;

            arr[m] = 1;

        }

        for(int i = 1;i <= n;i++)
        {
            if(arr[i] == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}
