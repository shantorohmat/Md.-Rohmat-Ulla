#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int i,j;

public:

    void set(int i,int j) { this-> i = i,this->j = j; }

    int get() { return i*j; }

};

int main()
{
    shanto *p;

    int i,m,n;

    p = new shanto [10];

    if(!p)
    {
        cout << "Allocation error " << endl;

        exit(1);
    }

    for(i = 0,m = 7,n = 2 ;i < 10;i++,m= m+2,n = n+5)
    {
        p[i].set(m,n);
    }
    for(int i = 0;i < 10;i++)
    {
        cout << "value of p["<< i << " ] : " << p[i].get() << endl;
    }

    delete []p;

    return 0;
}
