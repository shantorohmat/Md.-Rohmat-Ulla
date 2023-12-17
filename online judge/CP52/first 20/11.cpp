#include <iostream>
using namespace std;
int main()
{
     int t,n;

    cin >> t;

    while(t--)
    {
        cin >> n;
        long long int sum = 1;

        for(int i = 2;i <= n;i++)
        {
            sum = i * sum;
        }
        cout << sum << endl;

    }
    return 0;
}
