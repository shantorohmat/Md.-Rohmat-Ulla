#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int x,n;

        cin >> x >> n;

        if(x < n){

        for(int i = 1;  i * x <= n;i++)
        {
            cout << i * x << endl;
        }/*
        for(int j = x; j <= n;j = j + x)
        {
            cout << j << endl;
        }*/
        }
        if(x > n) cout << "Invalid" << endl;
    }
    return 0;
}
