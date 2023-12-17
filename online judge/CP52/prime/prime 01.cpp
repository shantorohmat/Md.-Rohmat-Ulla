#include <bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if(n  < 2) return 0;

    if(n == 2) {return 1; }

    if(n > 2)
    {
        for(int i = 2;i < n;i++)///2 times shorter than for(int i = 2;i < n / 2;i++)
        {
            if(n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
    int n;

    cin >> n;

    if(1 == fun(n))
    {
        cout << "prime" << endl;
    }
    else if(0 == fun(n))
    {
        cout << "zero is unconfirmed" << endl;
    }

}

