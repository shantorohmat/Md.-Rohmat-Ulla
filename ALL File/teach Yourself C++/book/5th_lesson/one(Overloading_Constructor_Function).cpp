#include <iostream>
using namespace std;

class base
{
    int x;
public:
    base(int n) {x = n; }
    base() { x = 0; }
    int get() {return x; }
};

int main()
{
    base ob[10];

    base oc[10] = {4,8,9,32,45,67,7,8,9100,10};

    for(int i = 0;i < 10;i++)
    {
        cout << ob[i].get() << endl;
    }

    cout << endl << endl << endl;

      for(int i = 0;i < 10;i++)
    {
        cout<< oc[i].get() << endl;
    }


    return 0;
}
