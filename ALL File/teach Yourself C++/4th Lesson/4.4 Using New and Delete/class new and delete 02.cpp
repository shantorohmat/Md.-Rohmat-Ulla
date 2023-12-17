#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int i,j;

public:

    void set(int i,int j) { this -> i = i,this -> j = j; }

    int get() {return i*j;}
};

int main()
{
    shanto *p;

    p = new shanto;

    if(!p)
    {
        cout << "Allocation error" << endl;
        exit(1);
    }

    p->set(4,5);

    cout << p->get() << endl;

    delete p;

    return 0;
}
