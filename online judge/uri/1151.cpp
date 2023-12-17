#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int first = 0,second = 1,fibo;

    for(int i = 0;i < n;i++)
    {
        if(i <= 1)
        {
            fibo = i;

        }
        else
        {
            fibo = first + second;

            first = second;

            second = fibo;
        }

        if(i < n-1)
         cout << fibo << " ";
        else
            cout << fibo << endl;
    }
    return 0;
}
