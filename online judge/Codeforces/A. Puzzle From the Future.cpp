#include <iostream>
using namespace std;
int main()
{
    int t,b,n,c;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int *b = new int[n];
        int *a = new int[n];
        for(int i = 0;i < n;i++)
        {
            cin >> b[n];
            a[i] = 0;
        }
        for(int i = 0;i < n;i++)
        {
             c = b[i] + a[i] + i;
        }
        cout << c << endl;
    }
}
