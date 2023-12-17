#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        double s;

        cin >> s;

        int count = 0;

       while(s > 1.0)
       {
           s = s/2;

           count++;
       }
        cout << count << " days" <<  endl;
    }
    return 0;
}
