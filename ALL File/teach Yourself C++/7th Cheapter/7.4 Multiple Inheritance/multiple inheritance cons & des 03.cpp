#include <bits/stdc++.h>
using namespace std;

class base
{
    int a;

public:

    base() {cout << "base Constructor" << endl;}

    ~base() { cout << "base Destructor" << endl; }
};

class derived
{
    int b;

public:

    derived()
    {
         cout << "Derived Constructor" << endl;
    }
    ~derived() { cout << "Derived Destructor" << endl; }
};

class derived01 :  public base,public derived
{
    int c;

public:

   derived01()
    {
         cout << "Derived01 Constructor" << endl;
    }
    ~derived01() { cout << "Derived01 Destructor" << endl; }


};

int main()
{
    derived01 ob;


    return 0;
}

