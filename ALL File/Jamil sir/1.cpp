#include <bits/stdc++.h>
using namespace std;
class base
{
public:
    base()
    {
        cout << "This is parent class" << endl;
    }
};

class derived : public base
{
    public :
    /*derived()
    {
        cout << "This is child class" << endl;
    }*/
    void show()
    {
        cout << "This is child class" << endl;
    }
};


int main()
{
    base ob;
    derived oc;
    oc.show();
}
