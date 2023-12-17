#include <iostream>
using namespace std;

class shanto
{
    string sp,so;

public:

    shanto(string d);
    ~shanto();

    void show();

};

shanto :: shanto (string d)
{
    sp = d;

}

shanto :: ~shanto()
{
    cout << "Destructor......"<< endl;
}

void shanto :: show()
{
    cout << "Hello! You wanna fuck me, " << sp << endl;
}

int main()
{
    shanto op("Sadia ?"),od("sa ?"),OC("dia ?");
    op.show();
    OC.show();
    od.show();

}
