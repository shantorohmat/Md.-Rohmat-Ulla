#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        long long int n;

        int num;

        cin >> n;

        for( num = 1;num <= n;num++){

        int s = 1;

        for(int i = 2;i <= sqrt(num) ;i++)
        {
            if(num % i == 0)
            {
               s = s + i + num/i ;
               //cout << s << endl;

            }

        }

        if(s == num)
        {
          cout << num <<endl;
        }

        }


    }
    return 0;
}

