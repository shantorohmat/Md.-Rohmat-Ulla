#include <bits/stdc++.h>
using namespace std;

class shanto
{
    int a;

public:

    shanto(int a)
    {
        this -> a = a;

        cout << "constructor......."<<endl;

    }

    ~shanto()
    {
        cout << "destructor...."<<endl;
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
int function(shanto* ol)
{
     ol->set_a(ol->get_a() * ol->get_a());

}



int main()
{
    shanto op(10),ol(30);


    cout << op.get_a() << " " << ol.get_a() <<endl;

    function(&op);
    function(&ol);



    cout<< op.get_a() << " " << ol.get_a() <<endl;





}

