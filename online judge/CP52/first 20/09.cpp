#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;

     cin >> t;

     while(t--)
     {
         double n,m;

         int s;

         cin >> n;

         m = sqrt(n);

         s = floor(m);

         if(s*s == n)
         {
             cout<<"YES"<<endl;
         }
         else cout << "NO" << endl;
     }
     return 0;
}
