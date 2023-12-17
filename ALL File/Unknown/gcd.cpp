#include <iostream>
using namespace std;

int main()
{
    int a,b,x,gcd,lcd;

    cout << "Give two number : ";

    cin >> a >> b;

    if(a < b) { x = a; }

    else x = b;

    for(; x > 0;x-- )
    {
        if(a % x == 0 && b % x == 0)
        {
            gcd = x;
            break;
        }
    }

    cout << gcd << endl;

    lcd = (a*b)/gcd;

    cout << lcd << endl;

    return 0;
}

