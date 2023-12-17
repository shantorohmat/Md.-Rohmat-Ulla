#include <bits/stdc++.h>
using namespace std;

void swapargs(int &i,int &j);

int main()
{
    int x = 10,y = 20;

    cout << "value of x : " << x <<endl;
    cout << "value of y : " << y <<endl << endl;

    swapargs(x,y);

    cout << "After swapping : " << endl;

    cout << "value of x : " << x <<endl;
    cout << "value of y : " << y <<endl << endl;

    return 0;
}

void swapargs(int &i,int &j)
{
    int t;

    t = i;
    i = j;
    j = t;
}

