#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
         int n;

        long long int s = 1;

        cin >> n;

        for(int i = 2;i <sqrt(n);i++)
        {
            if(n % i == 0)
            {
               s = s + i + n/i;
               cout << s << endl;

            }

        }

        if(s == n)
        {
            cout << "YES, " << n << " is a perfect number!" << endl;
        }
        else  cout << "NO, " << n << " is not a perfect number!" << endl;


    }
    return 0;
}
