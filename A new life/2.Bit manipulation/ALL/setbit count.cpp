#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0;

    while(n > 0 )
    {
        if((n & 1)) c++;
        //n&1 is 1, then odd, else even
        n = n >> 1;
    }
    cout << c << endl;
}
