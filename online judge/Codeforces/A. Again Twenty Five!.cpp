#include <iostream>
using namespace std;
#define ll  long long int

ll BiExpoMod(ll base,ll n)
{
    ll result = 1;

    while(n)
    {
         if(n%2)
        {
            result = ((result%100) * (base%100))%100;
            n--;
        }
        else
        {
            n /= 2;
            base = ((base%100)*(base%100))%100;
        }
    }
    return result;
}
int main()
{
    ll n;cin >> n;
    int m = 5;


    cout << BiExpoMod(m,n) << endl;
}
