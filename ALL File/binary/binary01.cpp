#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int main()
{
    int n,c = 0,sum = 0;

    char s1[100];

    for(n = 0;95 >= pow(2,n);n++)
    {
        c = c + 1;
    }

    for(int i = 0,n  = c - 1 ;i <= c; i++, n--)
{
    sum = sum + pow(2,n);

    cout << sum << endl;



    if( sum  <= 95)
     {
        s1[i] = '1';

        if(sum == 95) break;
     }
    else if(sum > 95)
        {
            sum = sum - pow(2,n);
            s1[i] = '0';
        }

}

    for(int i = 0;i < c;i++){
    cout << s1[i] << '\t';}

}


