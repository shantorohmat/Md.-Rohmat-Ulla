#include <iostream>
using namespace std;

class  base
{
    int a;
public:
    base(int n)  { a = n;  }
    void show()  {cout << a << '\t' ; }
};

int main()
{
    base ob[4][2] = { 1,2,3,4,5,6,7,8};
    for(int i = 0;i < 4;i++)
    {
        ob[i][0].show();
        ob[i][1].show();
        cout << endl;
    }
    return 0;
}
