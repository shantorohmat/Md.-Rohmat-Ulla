#include <bits/stdc++.h>
using namespace std;

class base
{
    int a;

public:

    base(int a) {this -> a = a;}
    int get_a() { return a; }
};

class derived
{
    int b;

public:

    derived(int b)
    {
         this -> b = b;
    }
    int get_b() { return  b;}
};

class derived01 :  public base,public derived
{
    int c;

public:

    derived01(int a,int b,int c) : derived(b),base(a)
    {
        this -> c = c;
    }
    int get_c() { return c ;}

    void show() { cout << get_a() << " " << get_b() << " " << get_c() << endl; }
};

int main()
{
    derived01 ob(10,20,30);



    ob.show();
}
