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

};
int function(shanto ol)
{
    return ol.get_a() * ol.get_a();

}



int main()
{
    shanto op(10),ol(30);


    cout << op.get_a() << " " << ol.get_a() <<endl;


    cout << function(op) << " " <<function(ol) << endl;

    cout<< op.get_a() << " " << ol.get_a() <<endl;

    return 0;

}
