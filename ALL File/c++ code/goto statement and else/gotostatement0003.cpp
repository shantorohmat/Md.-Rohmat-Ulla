#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,i = 1;

    cin >> n;

    PRINT:
        {
            cout << i << endl;
            i++;
        }
    if(i <= n){
    goto PRINT;
    }

    return 0;
}

