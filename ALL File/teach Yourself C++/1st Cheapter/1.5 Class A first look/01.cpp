#include <bits/stdc++.h>
using namespace std;


    class  shanto
    {

    string a;

public:

    void set(string x);

    string get();

    };

    void shanto :: set(string x)
    {
        a = x;
    }
    string shanto :: get()
    {
        return a;
    }
int main()

{
    shanto op;
    op.set("shanto is good boy.");
    cout << op.get()<<endl;

    return 0;
}

