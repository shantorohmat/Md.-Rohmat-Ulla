#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n,arr[100001],sum = 0;

        cin >> n;

        for(int i = 0;i < n -1;i++)
        {
            cin >> arr[i];
        }

        int m = (n* (n+1) )/2;

        for(int i = 0;i < n-1;i++)
        {
            sum = sum + arr[i];
        }
        int s = m -sum ;

        cout << s << endl;
    }
}
