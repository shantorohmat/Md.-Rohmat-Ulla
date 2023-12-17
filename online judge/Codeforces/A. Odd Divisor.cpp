#include <iostream>
#include <math.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,a;
    cin >> n;

    while(n--)
    {
        int k = 0;
        cin >> a;
        for(ll i = 2;i <= 100;i++)
        {

                if(n % i == 0)
                {
                    if(i%2 ){
                    k = 1;
                    //cout << "YES" << endl;
                    break;
                    }
                }
                if(i > a) break;

            //else k = 0;
        }
        if(k == 0) cout << "NO" << endl;
        else if(k == 1) cout << "YES" << endl;
    }
}
