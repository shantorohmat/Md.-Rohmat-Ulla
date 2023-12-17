#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int m,a,n,t,l,k;


    cin >> t;
    for(int i = 0; i < t;i++)
    {
        cin >> n;
        m = ((((((n * 567)/9) + 7492) * 235)/47)- 498);
        a = m/10;
        k = a % 10;

        if(k<0) {k = k*(-1);}

      cout << k << endl;

    }
        return 0;



}
