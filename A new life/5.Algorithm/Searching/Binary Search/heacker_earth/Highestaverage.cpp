#include <bits/stdc++.h>
 
using namespace std;
 
 
#define int long long
 
 
 
int bSearch(int arr[], int low, int high, int key)
 
{
 
    int res = 0;
 
    while (low <= high)
 
    {
 
        int mid = low + (high - low) / 2;
 
 
        if (arr[mid] < key)
 
        {
 
            res = mid + 1;
 
            low = mid + 1;
 
        }
 
        else
            {
 
            high = mid - 1;
 
            }
 
    }
 
    return res;
 
}
 

 
int32_t main()
 
{
    int n;
 
    cin >> n;
 
    int a[1000000];
 
    for (int i = 0; i < n; i++)
 
    {
 
        cin >> a[i];
 
    }
 
    sort(a, a + n);
 

    for (int i = 0; i < n; i++)
 
    {
 
        a[i + 1] += a[i];
 
    }
 
    for (int i = 0; i < n; i++)
 
    {
 
        a[i] = a[i] / (i + 1);
 
    }

    int q;
 
    cin >> q;

    while (q-- )
 
    {
 
        int x;
    
        cin >> x;

        int res = bSearch(a, 0, n - 1, x);
    
        cout << res << endl;
 
    }

    return 0;
 
}