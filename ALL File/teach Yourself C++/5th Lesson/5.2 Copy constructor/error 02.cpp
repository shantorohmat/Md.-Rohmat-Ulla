#include <bits/stdc++.h>
#include <cstdlib>
#include <cstring>

using namespace std;

class shuvo
{
    int *p;

public:

    shuvo(int i);

    shuvo(const shuvo &a);

    ~shuvo() {delete p; }

     friend int  getval(shuvo ob );

};
shuvo :: shuvo(int i)
{
    p = new int;

    if(!p)
    {
        cout << "Allocation error " << endl;
        exit(1);

    }
    *p = i;
}

shuvo :: shuvo(const shuvo &a)
{
    p = new int;

    if(!p) exit(1);

   *p = *a.p;

}



int getval(shuvo ob)
{
    return *ob.p;
}

int main()
{
    shuvo a(1),b(2);

    cout << getval(a) << "  " <<getval(b) << endl;

    cout << endl ;

    cout << getval(a) << "  " << getval(b) << endl;

    return 0;
}
