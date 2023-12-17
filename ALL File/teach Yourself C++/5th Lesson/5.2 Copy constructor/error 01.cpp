#include <bits/stdc++.h>
#include <cstdlib>
#include <cstring>
using namespace std;

class shanto
{
    char *p;

public:

    shanto(char *s);

    shanto(const shanto &a);

    ~shanto() { cout << "using Destructor" << endl; delete []p; }

    char *get() { return p; }
};

shanto :: shanto(char *s)
{
    int len = strlen(s)+1;

    p = new char [len];

    if(!p)
    {
        cout << "Allocation error " << endl;

        exit(1);
    }
    strcpy(p,s);

    cout << "Using normal constructor : " << endl;
}
shanto :: shanto(const shanto &a)
{
    int len = strlen(a.p) + 1;///a.p kano? Ans : a.p dia strcpy dia p ta ja value pass hoysa ta assign korta pari

    p = new char [len];
    if(!p)
    {
        cout << "Allocation error" << endl;
        exit(1);
    }
    strcpy(p,a.p);

    cout << "Using copy constructor : " << endl;
}

void show(shanto x)
{
    char *s;

    s = x.get() ;

    cout << s <<endl;
}

int main()
{
    shanto ob("shanto"),oc("robi");

    show(ob);

    show(oc);

    return 0;
}
