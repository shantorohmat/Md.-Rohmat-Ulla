#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--){
    int arr[] ={6,28,496,8128,33550336};

    long long int n;

    cin >> n;

    for(int i = 0;i < 5;i++)
    {
        if(arr[i] <= n)
        {
            cout << arr[i] << endl;
        }
        else break;
    }
    }


}
