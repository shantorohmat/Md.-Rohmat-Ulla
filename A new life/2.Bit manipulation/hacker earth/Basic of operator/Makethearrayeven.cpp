#include <iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll *a = new ll[n];
        for(int i = 0;i < n;i++)
        {
            cin >> a[i];
        }
        ll cnt = 0;
        for(int i = 0;i < n;i++)
        {
            if((a[i]%2!=0)&(a[i+1]%2!=0)) 
            {

                cnt++;

                i++; 
            }

            else if((a[i]%2!=0)&(a[i+1]%2==0)) 
            {

                cnt+=2;
            }

            
        }
        cout << cnt << endl;
    }

}