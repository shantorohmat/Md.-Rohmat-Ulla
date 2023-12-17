#include<iostream>
using namespace std;
class student
{
    int a,b;
public:
    void set(int i,int j)
    {
        a = i;
        b = j;
    }
    void show()
    {
        cout << a << "   "  << b << endl ;
    }
};
int main()
{
    student sp,bp;
    sp.set(5,6);
    bp = sp;
    sp.show() ;
    bp.show();
    return 0;
}
