#include <iostream>
using namespace std;
int main()
{
    int n,h,m,s;

    cin >> n;

    s = n % 60;

     m = n / 60;

     if(m >= 60)
     {

         h = m /60;

          m = m % 60;
     }

     else h = 0;

     cout << h << ":" << m << ":" << s << endl;

     return 0;

}
