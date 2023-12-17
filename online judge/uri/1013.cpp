#include <iostream>
#include <cmath>
using namespace std;

inline int fun(int a,int b)
{
     return ((a+b+abs(a-b))/2);
}

int main()
{
    int a,b,c,great,great_1;

    cin >> a >> b >> c;

    great = fun(a,b);

    great_1 = fun(great,c);

    cout << great_1 << " eh o maior" << endl;

    return 0;
}
