///cp52 book 12 no demo
#include <iostream>
using namespace std;

int main()
{
    int t;

    cin  >> t;

    while(t--)
    {
        int n;

        cin >> n;

        long long int sum = 1;

        for(int i = 2;i <= n;i++)
        {
            sum = sum * i;
        }
            cout << sum << endl;

        int mod,count  = 0;

        while(sum > 0)
        {
            mod = sum % 10;

            if(mod == 0) count++;
            else break;

            sum = sum / 10;

        }

        cout << count << endl;
    }

    return 0;
}
