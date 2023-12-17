#include <iostream>
using namespace std;

    template <class x>

    void swapargs(x &a,x &b)

    {
        x temp;

        temp = a;
        a = b;
        b = temp;
    }
    int main()
    {
        int i = 10,j = 20;

        float x = 10.54, y = 12.36;

        cout << "Original i,j : " << i << " " << j << endl;

        cout << "Original x,y : " << x << " " <<  y << endl;

        swapargs(i,j);
        swapargs(x,y);

        cout << "Swapped i,j : " << i << " " << j <<  endl;
        cout << "Swapped x,y : " << x << " " << y <<  endl;

        return 0;
    }

