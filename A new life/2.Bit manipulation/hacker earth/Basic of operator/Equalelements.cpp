#include <iostream>
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
        int *a = new int [n+7];
        int even = 0,odd = 0;
        for(int i = 0;i < n;i++)
        {
            cin >> a[i];
            if(a[i]%2 == 0)
            {
                even++;
            }
            else
              odd++;
        }
        cout << min(even,odd) << endl;
        
    }
}