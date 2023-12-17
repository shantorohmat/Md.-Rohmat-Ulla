#include <iostream>
using namespace std;

int GCD(int a,int b)
{
    int x;

    if(a < b) { x = a; }

    else { x = b; }

    for(;x > 0 ;x--)
    {
       if(a % x == 0 && b % x == 0)
        {
           return x;

           break;
        }
    }
}

int main()
{
    int n,G;

    while(1)
    {
        cin >> n;

        G = 0;

        if(n == 0 || n > 501){ break; }

        else
        {

          for(int i = 1;i < n;i++)
          {
            for(int j = i+1;j <= n;j++)
            {
                G += GCD(i,j);
            }

         }
            cout << G << endl;

       }
    }

    return 0;
}
