#include <iostream>
using namespace std;
int main()
{
    int t,w,h,n,Count,k;
    cin >> t;
    while(t--)
    {

        Count = 1;
        cin >> w >> h >> n;
        while(w%2 == 0)
        {

            Count *= 2;
            w /= 2;
        }
         while(h%2 == 0)
        {

            Count *= 2;
            h /= 2;
        }

        if(Count >= n )
        {
            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
}
