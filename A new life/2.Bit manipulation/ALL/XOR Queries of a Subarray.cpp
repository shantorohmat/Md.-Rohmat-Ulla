#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int [n];
    for(int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    int *prefix = new int [n];
    prefix[0] = arr[0];

    for(int i = 1;i < n;i++)
    {
        prefix[i] = prefix[i-1] ^ arr[i];

    }
//    for(int i = 0;i < n;i++)
//    {
//
//        cout << prefix[i] << endl;
//    }

    for(int i = 0;i < n;i++)
    {
        int l,r;
        cin >> l >> r;
        if(l == 0)
        {
            cout << prefix[r] << endl;

        }



        else {
            int x = prefix[r] ^ prefix[l-1];
        cout << x << endl;
        }
    }
    ///leetcode 1310

}
