#include <bits/stdc++.h>
using namespace std;
class base
{
public:

    virtual void fun()
    {
        cout << "Using base version of fun () : " << endl;
    }
};

class derived : public base
{
public:

    virtual void fun()
    {
        cout << "Using derived  version of fun () : " << endl;
    }
};

class derived01 : public derived
{
public:

    virtual void fun()
    {
        cout << "Using derived01 version of fun () : " << endl;
    }
};

int main()
{
     base *p;
     base ob;
     derived oc;
     derived01 od;

     p = &ob;
     p->fun();
     p = &oc;
     p->fun();
     p = &od;
     p->fun();

     return 0;
}
