#include <iostream>
using namespace std;

int main()
{
    int m,n,s,l,r = 1;

    cin >> m >> n;

    if(m < n) s = m,l = n;

    else s = n,l = m;

     while(1)
     {
         r = l % s;

         if(r == 0) {cout << s << endl; break;}

         else{

         l = s;

         s = r;
         }
     }
     cout << s <<endl;
}
