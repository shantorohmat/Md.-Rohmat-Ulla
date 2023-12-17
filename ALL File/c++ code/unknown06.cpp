#include<bits/stdc++.h>
using namespace std;
class student
{
    int a;
public:
    student ()
    {
        cout << "const..."<< endl;
        a = 10;
    }
    ~student()
    {
        cout << "dest...."<< endl;
    }
    void show()
    {
        cout << a << endl;
    }
};
int main()
{
    student sp;
    sp.show();
    return 0;

}
