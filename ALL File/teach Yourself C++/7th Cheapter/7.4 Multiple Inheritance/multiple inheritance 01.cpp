#include <bits/stdc++.h>
using namespace std;

class base
{
    int a;

public:

    base(int a) {this -> a = a;}
    int get_a() { return a; }
};

class derived : public base
{
    int b;

public:

    derived(int b,int a) : base(a)
    {
         this -> b = b;
    }
    int get_b() { return  b;}
};

class derived01 : public derived
{
    int c;

public:

    derived01(int a,int b,int c) : derived(a,b)
    {
        this -> c = c;
    }
    int get_c() { return c ;}

    void show() { cout << get_a() << " " << get_b() << " " << get_c() << endl; }
};

int main()
{
    derived01 ob(10,20,30);

    cout << ob.get_b() << endl;

    ob.show();
}
