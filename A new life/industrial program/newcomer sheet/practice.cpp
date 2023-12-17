#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;
#define ll long long int
int main()
{
    char c;
    cin >> c;
    char x ;
    if(c >= 'a')
    x =  c - 32 ;
    else x = c + 32;

   cout << x << endl;

}