#include <iostream>
using namespace std;
const int SIZE = 5;

class arraytype
{
    int a[SIZE];
public:
    arraytype()
    {
        int i ;
        for(i = 0;i < SIZE;i++) a[i] = i*10;
    }
    int operator[](int i) { return a[i]; }
};

int main()
{
    arraytype ob;

    for(int i = o;i <SIZE;i++){ cout << ob[i] << '\t' ;}

    return 0;

}
