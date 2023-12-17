#include <bits/stdc++.h>
using namespace std;

template <class x,class y>

void swapargs(x &a,y &b)
{
    cout << a << " " <<b << endl;
}

int main()
{
    int i = 10;

    char j = 'a';

    double  x = 10.256;
    long long int y = 2025621354846415116541654;

    swapargs(i,j);
    swapargs(x,y);

    return 0;
}
