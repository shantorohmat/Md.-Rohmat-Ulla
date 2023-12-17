#include <bits/stdc++.h>
using namespace std;

class shanto
{
    string sp;
public:

    shanto (string s);
    void show();
};

shanto :: shanto(string s)
{
    sp = s;
}
void shanto :: show()
{
    cout << "The string is : " << sp << endl;
}

int main()
{
    shanto op(" Oi babu chadso ");
    op.show();
    return 0;
}
