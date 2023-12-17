#include <iostream>
using namespace std;

int main()
{
    int *p;

    p = new int[5];

    int m = 100;

    for(int i = 0;i < 5;i++,m = m + 100)
    {
        p[i] = m;

    }
    for(int i = 0;i < 5;i++)
    {
        cout << " p["<<i<<"] : " << p[i] << endl;
    }
    delete p;

    return 0;
}
