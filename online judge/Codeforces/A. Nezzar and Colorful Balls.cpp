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
        int *arr = new int[n];
        for(int i = 0; i < n;i++)
            cin >> arr[i];
            int c = 1,x = 0;
        for(int i = 1;i <= n;i++)
        {
            if(arr[i] == arr[i - 1])
            {
                if(x == 0)
                c++;
            }
            else x = 1;
        }
        cout << c << endl;
    }
}
