#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        char n;

        cin >> n;

        if(n >= 'A' && n <= 'Z') cout << "Uppercase Character" << endl;

        else if(n >= 'a' && n <= 'z') {cout << "Lowercase Character" << endl; }

        else if(n >= '0' && n <= '9') {cout << "Numeric Digit" << endl;}

        else {cout << "Spacial Character" << endl;}
    }
    return 0;
}
