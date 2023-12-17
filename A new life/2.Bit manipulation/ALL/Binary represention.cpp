#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans ;
    int i;
    while(cin >> i){

    int a = 1 << i;//2^i
    if(n & a) ans = 1;
    else ans = 0;
    cout << ans << " ";
    }
}

