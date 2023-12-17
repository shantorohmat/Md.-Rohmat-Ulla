#include <bits/stdc++.h>
using namespace std;
#define size 1000000
int s[size];


void seiv()
{
    for(int i = 2;i <= size;i++ )
    {
        s[i] = 1;
    }

    for(int i = 2;i <= size;i++)
    {
        if(s[i] == 1)
        {
            for(int j = 2;i * j <= size;j++)
            {
                s[i*j] = 0;
            }
        }
    }
}

int main()
{
    int t;

    seiv();

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        if(s[n] == 1) {cout << "prime" << endl;}

        else cout << "not prime" << endl;

    }
    return 0;
}
