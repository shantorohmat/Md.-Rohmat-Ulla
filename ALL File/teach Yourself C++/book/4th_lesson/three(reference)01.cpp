#include <iostream>
using namespace std;
void fun(int &n)
{
    n = 100;
}
int main()
{
    int i = 0;

    fun(i);

    cout << i << endl;
}
