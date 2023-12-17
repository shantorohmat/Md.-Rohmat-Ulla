#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;

    cin >> n;

    int maxA  = 0,maxB = 0;

    for(int i = 0;i < n;i++)
    {
        int a,b;

        cin >> a >> b;


        maxA = maxA - a + b;

        maxB = max(maxA,maxB);
    }
    cout << maxB << endl;
}
