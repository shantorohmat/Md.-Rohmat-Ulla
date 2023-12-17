#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool b;

    cout << " Before setting boolalpha flag : " << endl;
    b  = true ;
    cout << b << endl;
    b = false;
    cout << b << endl;

    cout <<  "After setting boolalpha flag : " << endl;
    b = true;
    cout << boolalpha << b <<endl;
    b = false;
    cout << boolalpha << b << endl;

    cout << "Enter a Boolean value : "<< endl;
    cin >> boolalpha >> b ;
    cout << "You enterer : " << b << endl;

    return 0;
}
