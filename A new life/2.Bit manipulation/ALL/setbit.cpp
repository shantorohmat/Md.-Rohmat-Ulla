#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i;
    while(cin >> i){

    int a = 1 << i;
    if(n & a) cout << 1 << endl;
    else cout << 0 << endl;
    }
}
