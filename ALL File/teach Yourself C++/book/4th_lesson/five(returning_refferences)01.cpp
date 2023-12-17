#include <iostream>
#include <cstdlib>
using namespace std;

class array
{
    int size;
    char *p;
public:
    array(int num)
    {
        p = new char[num];

        size = num;
    }
    ~array() {delete []p; }

    char &put(int i)
    {
        if(i < 0 || i >= size) {cout << "Bounds error !!!" << endl , exit(1);}

        return p[i];
    }

    char get(int i)
    {
         if(i < 0 || i >= size) {cout << "Bounds error !!!" << endl , exit(1);}

        return p[i];
    }
};

int main()
{
    array a(10);

    a.put(3) = 'X';
    a.put(2) = 'R';

    cout << a.get(3) <<  '\t' << a.get(2);

    cout << ": "  << '\t' ;

    a.put(1) = '!';

    cout << a.get(1) << endl;

    return 0;
}
