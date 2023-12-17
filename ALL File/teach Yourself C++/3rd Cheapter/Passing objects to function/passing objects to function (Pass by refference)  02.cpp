#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int a;

public:

  shanto(int a)
 {
    this -> a = a;
 }

 int get_a()
 {
    return a;
 }

   void set_a(int a)
 {
    this -> a = a;
 }

};

inline int function(shanto *ol)
{
     ol->set_a(ol->get_a() * ol->get_a());
}


int main()
{


    shanto op(50),ol(20);

    cout << op.get_a() << "  " << ol.get_a() << endl;

    function(&op);
    function(&ol);

     cout << op.get_a() << "  " << ol.get_a() << endl;


    return 0;
}

