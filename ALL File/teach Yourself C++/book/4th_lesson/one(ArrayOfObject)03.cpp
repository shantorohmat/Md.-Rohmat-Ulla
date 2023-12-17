#include <iostream>
using namespace std;

class base
{
    int a,b;
public:
    base(int x,int y) { a = x,b = y;}
    void show() { cout << a << '\t' << b << endl; }
};

int main()
{
    base ob[4][2] = {base(1,2),base(3,4),base(5,6),base(7,8),base(9,10),base(11,12),base(13,14),base(15,16)  };

    for(int i = 0;i < 4;i++)
    {
        ob[i][0].show();
        ob[i][1].show();
    }

    return 0;
}
