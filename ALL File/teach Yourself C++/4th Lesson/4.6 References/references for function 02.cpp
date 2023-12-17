#include <bits/stdc++.h>
using namespace std;

void fun(int &n);

int main()
{
    int i = 0;

    fun(i);

    cout << "The value of ["<< i << "] : " << i << endl;

    return 0;
}

void fun(int &n)
{
    n = 100;
}
