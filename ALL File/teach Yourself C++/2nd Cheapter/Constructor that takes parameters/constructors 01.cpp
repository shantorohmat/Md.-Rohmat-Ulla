#include  <bits/stdc++.h>
using namespace std;

class shanto
{
    int a,b;

public:

    shanto(int a,int b);

    void show();

};

shanto :: shanto(int a,int b)
{
    this -> a = a;
    this -> b =  b;
}

void shanto:: show()
{
    cout <<  a*b << endl;
}

int main()
{
    shanto ap(4,7);

    ap.show();

    return 0;
}




