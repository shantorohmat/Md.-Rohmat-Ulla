#include <bits/stdc++.h>
using namespace std;

class base
{
    int i;
public:
    base(int i) { this -> i = i; cout << "Base constructor" << endl; }
    ~base()  { cout << "Base destructor" << endl; }
    void show_i() { cout << "Base I : " << i << endl; }
};
class derived: public base /// private as same as protected and private
{
    int j;
public:
    derived(int j,int i) : base(i) {this -> j = j;  cout << " derived constructor" << endl;}
    ~derived() { cout << " derived destructor" << endl; }
    void show_j() { cout << " derived j : " <<  j << endl;}
};

int main()
{
    derived o(100,200);
    o.show_i();
    o.show_j();
    return 0;
}


