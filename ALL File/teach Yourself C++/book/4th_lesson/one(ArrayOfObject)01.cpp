#include <iostream>
using namespace std;

class base
{
    int a;
public:
    base(int n) { a = n; }
    void show() {cout << a << endl; }

};
int main()
{
    base ob[] = {4,8,91,45};

    for(int i = 0;i < 4;i++) {ob[i].show(); }

    return 0;

}
