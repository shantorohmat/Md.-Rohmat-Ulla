#include <bits/stdc++.h>
using namespace std;

class shanto
{
public:


    //~shanto() {cout < "destructor" << endl; }

    shanto() { cout << "using normal constructor" <<endl; }

    shanto(const shanto &a) { cout << "copy constructor" << endl; }


    shanto f()
    {
        shanto  temp;

        return temp;
    }

};


int main()
{
    shanto obj;

    obj = obj.f();

    return 0;
}

