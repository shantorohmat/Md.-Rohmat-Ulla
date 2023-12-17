#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for(int i = 0;i < n;i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int y = 0;
    for(int i = 0;i < n;i++)
    {
        if(a[i] == x)
        {
            y = 1;
            cout << x << " is here. " << endl;
        }
        
    }
    if(y == 1)
         cout << "There is no such number as " << x << endl;
}