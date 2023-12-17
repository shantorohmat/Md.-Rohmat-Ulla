#include <iostream>
using namespace std;

int main()
{
    int n,m= 1,k ;

    cin >> n;

    k = n;

    for(int r = 1;r < n;r++)
    {


        for(int c = (n-r);c > 0;c--)
        {
            cout << " ";
        }

        int q[100];
        for(int c = 1,l = 1;c <= ((2*m)-1);c++)
        {
            cout <<l;
            if(r < c)l--;
            else l++;

        }



        cout << endl;



        if(m <= n) m++;

    }

    return 0;
}
