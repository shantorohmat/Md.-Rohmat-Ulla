#include <bits/stdc++.h>
using namespace std;
template<class x>
void swaping(x &a,x &b)
{
    x temp;

    temp = a;

    a = b;

    b = temp;

}
void swaping(int a,int b)
{
    cout << "this is inside swap(int,int) " << endl;
}
int main()
{
    int i = 10,j = 20;

    double x = 90.024854,y = 785122.2564;

    cout << i << "  " << j << endl;

    cout << x << "  " << y << endl;

    swaping(i,j);///overload swapping was called.
    swaping(x,y);

    cout << i << "  " << j << endl;

    cout << x << "  " << y << endl;
}
