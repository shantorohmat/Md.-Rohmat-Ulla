#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    goto PRINT;

    cout << "Fuck You" << endl;

    PRINT:
        {
            cout << n << endl;
        }
}
