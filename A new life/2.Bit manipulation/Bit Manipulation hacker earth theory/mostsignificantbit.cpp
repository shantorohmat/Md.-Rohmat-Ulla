#include <iostream>
#include <limits.h>
#define ll long long int
using namespace std;
ll  MSB(int n)
{
    n = n | (n>>1);
    n = n | (n>>2);
    n = n | (n>>4);
    n = n | (n>>8);
    n = n | (n>>16);

    n = (((n+1)>>1) |  (n & (1 << ((sizeof(n) * CHAR_BIT)-1)))); //(n+1)/2
    return n;
}
int main()
{
    ll n;
    n = 138;
    
    cout << MSB(n) << endl;
    n = ~(int)0; // test for possible overflow
    cout << (unsigned int)MSB(n);
}