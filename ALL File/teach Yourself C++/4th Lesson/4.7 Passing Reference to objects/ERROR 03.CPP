#include <bits/stdc++.h>
using namespace std;

class shanto
{
    char *p;

public:

    shanto(char *s);

    ~shanto() {delete [] p; }

        char *get() { return p; }
};

shanto :: shanto(char *s)
{
    int len = strlen(s) + 1;

    p = new char [len];

    if(!p)
    {
        cout << "Allocation error" << endl;

        exit(1);
    }

    strcpy(p,s);
}

void show(shanto &x)
{
    char *s;

    s = x.get();

    cout << s << endl;
}

int main()
{
    shanto a("Hello"), b("fuck");

    show(a);
    show(b);

    return 0;
}
