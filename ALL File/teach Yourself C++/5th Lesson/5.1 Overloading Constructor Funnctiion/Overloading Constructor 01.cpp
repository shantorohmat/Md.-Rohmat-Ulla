#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int n;

public:

    shanto(int x)
    {
        n = x;
    }
    shanto()
    {
        n = 0;
    }
   int  gets() { return n; }
};
int main()
{
    shanto on[10],  ol[10]  = {1,2,3,6,4,5,8,9,7,63};

    for(int i = 0;i < 10;i++){
    cout << on[i].gets() << endl ;
    }
    cout << endl;

    for(int i = 0;i < 10;i++){
    cout << ol[i].gets() << endl;
    }

    return 0;

}
