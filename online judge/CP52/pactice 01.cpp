#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--){

    int a,b,c,x,y,z;

    cin>> a>> b>> c;

    if(a > b)
    {
        if(a > c)
        {
            ///largest : a
            x = a;
            if(b > c) {y = b, z = c;}
            else {y = c, z = b;}
        }

        else
        {
            x = c;
            if(b > a) {y = b, z = a;}
            else {y = a, z = b;}
        }
    }
    else
    {
        if( b > c)
        {
            ///largest : b
            x = b;
            if(c > a) {y = c, z = a; }
            else {y = a,z = c; }

        }
        else
        {
            x = c;
            if(b > a) {y = b, z = a; }
            else {y = a,z = b; }

        }
    }

    cout <<  "largest : " << x << " smallest : " << z << " middle : " << y << endl;
    }
    return 0;
}
