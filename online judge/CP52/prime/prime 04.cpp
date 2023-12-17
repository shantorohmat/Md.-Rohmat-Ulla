#include <bits/stdc++.h>
using namespace std;
#define size 100000
char s[size];
void sieve()
{


   for(int i = 2;i < size;i++)
   {
      s[i] = 1;
   }
   for(int i = 2;i <= sqrt(size);i++)
   {
       if(s[i]==1)
       {
          for(int j = 2;i *j <= size;j++)
          {
              s[i*j] = 0;
          }
       }

   }
}

int main()
{
    int t,a,b,count;
    sieve();

    cin >> t;

    while(t--)
    {
        cin >> a >> b ;

        count = 0;

        for(int i = a;i <= b;i++)
        {
            if(s[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
