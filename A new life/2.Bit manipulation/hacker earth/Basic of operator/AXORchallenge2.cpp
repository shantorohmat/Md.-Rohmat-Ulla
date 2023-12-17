#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll c ;
    cin >> c; 
    ll copyofc = c ;
    ll pos = 0;

    while(c>0)
    {
        pos++;
        c = c / 2;
    }
    ll a = pow(2,pos-1) - 1;
    ll b = a ^ copyofc;
    cout << a * b  << endl;

}