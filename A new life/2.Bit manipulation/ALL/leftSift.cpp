#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    unsigned int n;///the two shift operator are generally used with unsigned data type to avoid ambiguity
    cin >> n;

    for(int i = 1;i <= 5;i++)
    {
        int a = n << i;/// lift shif
        cout << n << " X " << "2^"<<i << " = " << a << endl;
    }

    cout << endl;
    for(int i = 1;i <= 5;i++)
    {
        int a = n * pow(2,i);
        cout << n << " X " << "2^"<<i << " = " << a << endl;
    }
}
///The left-shift  operator are equivalent to multiplication .
