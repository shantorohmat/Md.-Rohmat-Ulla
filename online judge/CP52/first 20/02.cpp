#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,len,ln;

    cin >> t;

    while(t--)
    {
        char x[1004],lc;
        cin >> x;

        len = strlen(x);

        lc = x[len-1];

        ln = lc - '0';

         if(ln % 2 == 0)
        {
            cout << "even" << endl;
        }
        else if(ln % 2 != 0)
        {
            cout << "odd" << endl;
        }

    }
    return 0;
}
