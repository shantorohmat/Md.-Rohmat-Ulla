#include <bits/stdc++.h>
#include <cstdlib>
#include <cstring>
using namespace std;
#define size 255

class strtype
{
    char* p;
    int len;

public:

    strtype();

    ~strtype();

    void set(char *ptr);

    void show();

};

strtype  :: strtype()
{
    p = (char *) malloc(sizeof(char)* size);
    if(!p)
    {
        cout << "Allocation failed" << endl;
        exit(1);
    }
    *p = '\0';
    len = 0;
}

strtype :: ~strtype()
{
    cout << "Freeing  p" <<endl;
    free(p);
}

void strtype :: set(char *ptr)
{
    strcpy(p,ptr);

    if(strlen(p)> size)
    {
        cout << "string too big " << endl;
        return ;
    }
    len = strlen(p);
}
void strtype :: show()
{
    cout << p << "  length : " << len << endl;
}

int main()
{
    strtype op;

    op.set(" hey you go! ");
    op.show();

    return 0;
}



