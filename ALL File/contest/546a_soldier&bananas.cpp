#include <iostream>
using namespace std;

int main()
{
    long int n,d;

    int k,w,t;

    cin >> k >> n>> w;

    d = 0;

    for(int i = 1;i <= w;i++)
    {
        d += i * k ;
    }
    if(n < d)
    {
        t = d - n;

        cout << t << endl;


    }
    else
    {
        t  = 0;

        cout << t << endl;
    }

    return 0;

}
