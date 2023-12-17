#include <iostream>
#include <cstdlib>

using namespace std;

class array
{
    int *p;
    int size;
public:
    array(int sz)
    {
        p = new int[sz];

        size = sz;

        cout << "Using Normal Constructor " << endl;
    }
    ~array()
    {
        delete []p;
    }

    array(const array &a)
    {
        int i;

        size = a.size;

        p = new int[a.size];

        for(i = 0;i < a.size;i++) {p[i] = a.p[i]; }

        cout << "Using Copy constructor" << endl;
    }

    void put(int i,int j) {if(i >= 0 && i < size){p[i] = j;}}

    int get(int i) {return p[i]; }
};

int main()
{
    array num(10);

    int i;

    for(i = 0;i < 10;i++)
    {
        num.put(i,i);

    }

    for(i = 9;i >= 0;i--)
    {
        cout << num.get(i);
    }
    cout << endl;

    array x = num;

    for( i = 0;i < 10;i++)
    {
        cout << x.get(i);
    }

    return 0;
}
