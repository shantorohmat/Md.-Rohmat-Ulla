//check if a given number is a power of 2 ?
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int y = n & (n-1);
    if(n & (n-1))
    {
        cout <<"No" << endl;
    }
    else cout << "Yes" << endl;
}