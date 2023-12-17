#include <bits/stdc++.h>
using namespace std;
long long int fact(int n)
{
    int sum = 1;

    for(int i = 1;i <= n;i++)
    {
        sum =  sum * i;
    }
    return sum;
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        long long int n;

        cin >> n;

        double sum = 0;

        for(int i = 1;i <= n;i++)
        {
            sum = sum + ((double)i/fact(i));
        }

        cout.precision(5);

        cout << sum << endl;
    }
}
