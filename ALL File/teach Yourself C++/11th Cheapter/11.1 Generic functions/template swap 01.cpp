#include <bits/stdc++.h>
using namespace std;

template <class x> void swapargs(x &a,x &b)
{
    x temp;

    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i = 10,j = 20;

    //float x = 10.256,y = 20.256;
    char x = 'a',y = 'v';

    cout << "Before swapping : " << endl;

    cout << i << "   " << j << endl;

    cout << x << "  " <<  y << endl;

    swapargs(i,j);
    swapargs(x,y);

    cout << "After swapping : "<< endl;

    cout << i << "   " << j << endl;

    cout << x << "  " <<  y << endl;


    return 0;
}
