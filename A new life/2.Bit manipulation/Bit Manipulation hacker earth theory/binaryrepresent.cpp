#include <bits/stdc++.h>
using namespace std;
 
void bin(unsigned n)
{
    if (n > 1)
        bin(n >> 1);
    int x = n & 1;
    cout << x ; // n% 2 == n & 1
}
int main(void)
{
    int n;
    cin >> n;
    bin(n);
}