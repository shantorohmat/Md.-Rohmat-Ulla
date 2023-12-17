#include <iostream>
using namespace std;

void fun(int *n)
{
    *n = 100;
}
int main()
{
    int i;

    fun(&i);

        cout << i << endl;

    return 0;
}
