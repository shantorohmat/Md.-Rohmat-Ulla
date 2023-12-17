#include <bits/stdc++.h>
#include <cstdlib>
#include <cstring>
using namespace std;


class strtype
{
    char* p;
    int len;

public:

    strtype(char *ptr);

    ~strtype();

    void show();

};

strtype  :: strtype(char *ptr)
{
    len = strlen(ptr);
    p = (char *) malloc(len + 1);
    if(!p)
    {
        cout << "Allocation failed" << endl;
        exit(1);
    }
    strcpy(p,ptr);
}

strtype :: ~strtype()
{
    cout << "Freeing  p" <<endl;
    free(p);
}


void strtype :: show()
{
    cout << p << "  length : " << len << endl;
}

int main()
{
    strtype op(" hey you go! ");


    op.show();

    return 0;
}



