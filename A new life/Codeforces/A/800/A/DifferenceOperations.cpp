#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int *a = new int[n+7];
        for(int i = 1;i <= n;i++)
        {
            cin >> a[i];
        }
        int k = 0;
       for(int i = 2;i <= n;i++)
       {
        if(a[i]%a[1] == 0)
        k = 1;
        else
        {
            k = 0;
            break;
        }
       }

        if(k == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
        
    }
}