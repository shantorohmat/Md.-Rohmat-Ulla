#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
        //cout << arr[i] << " ";
    }
    int x = 3;
    int l = -1,r = n;
    while(l < r-1)
    {
        int m = (l+r)/2;
        if(arr[m] > x) r = m;
        else l = m;
    }
    cout << r << endl;
}
