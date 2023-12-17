#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *p;

    p = new int [5];

    if(!p)
    {
        cout << "Allocation is error " << endl;

        exit(1);
    }

    for(int i = 0;i < 5;i++)
    {
        p[i] = 5;
    }
    for(int i = 0;i < 5;i++)
    {
        cout << " show the value p["<< i << "] : " ;

        cout << p[i] << endl;
    }

    return 0;
}
