#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    while(n)
    {
            n = n  & (n-1);
            cnt++;
    }
    cout << cnt << endl;
}