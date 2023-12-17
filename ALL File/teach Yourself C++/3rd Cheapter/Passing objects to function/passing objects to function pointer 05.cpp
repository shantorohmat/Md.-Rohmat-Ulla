#include <iostream>
using namespace std;

class shanto
{
    int *p;
public:

    shanto(int i);

    ~shanto() { free(p); cout << "freeing " << endl; }

    int get() { return *p;}
};

inline shanto:shanto(int i)
{
    p = (int *)malloc(sizeof(int) );

    if(!p)
    {
        cout << "Allocation error " << endl;
        exit(1);
    }

    *p = i;
}

inline int neg(shanto ob)
{
   return -ob.get();
}

int main()
{
    shanto ob(-10);

    cout << ob.get() << endl;
    cout  << neg(ob) << endl;

    shanto on(20);

    cout << on.get() << endl;
    cout << neg(on) << endl;

    cout << ob.get() << endl;
    cout  << neg(ob) << endl;

    return 0;





}
