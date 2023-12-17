#include <bits/stdc++.h>
using namespace std;


    class  shanto
    {

public:

    string a;

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
    shanto op,ob,oc;
    op.a = "shanto is a good boy";
    ob.a = "Rohmat is a good boy";
    oc.a = "shanto_Rohmat is a good boy";
    cout << op.a<<endl;
    cout << ob.a<<endl;
    cout << oc.a<<endl;

    return 0;
}


