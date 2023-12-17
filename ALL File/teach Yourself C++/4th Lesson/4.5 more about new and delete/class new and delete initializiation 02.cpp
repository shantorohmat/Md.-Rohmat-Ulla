#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int i,j;

public:

    shanto(int i,int j) {  this-> i = i,this -> j = j; }

    int get() { return i*j; }
};

int main()
{
    shanto *p;

    p = new shanto (4,5);

    if(!p)
    {
        cout << "Allocation error "  << endl;

        exit(1);
    }

    cout <<  "Value : " << p->get() << endl;

    delete p;

    return 0;
}
