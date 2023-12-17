#include <bits/stdc++.h>
using namespace std;

/*int gcd(int a,int b)
{
    while(b != 0)
    {
        int temp = b;

         b = a % b;

         a = temp;
    }

    return a;
}*/

int gcd(int a,int b)
{
    int x;

    if(a < b) x = a;

    else x = b;

    for(;x > 0;x--){

    if(a % x == 0 && b % x == 0)
    {
        return x;
        break;
    }
    }
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int a,b;

        cin >> a >> b;

        int lcd = (a * b) / gcd(a,b);

        cout << "LCD = " << lcd << endl;
    }
    return 0;
}
