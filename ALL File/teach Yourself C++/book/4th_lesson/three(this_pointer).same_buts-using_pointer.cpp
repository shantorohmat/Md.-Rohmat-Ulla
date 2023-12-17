#include <iostream>
#include <cstring>
using namespace std;

class base
{
    char item[20];
    double cost;
    int on_hand;
public:
    base(char *item,double cost,int on_hand )//this pointer use kora hoy karon er maddoma amera base class er veriable
                                              //identity korta pari jokon ek oi name variable use kora base class er bitora
    {
        strcpy(this ->item,item);
        this -> cost = cost;
        this ->on_hand = on_hand;
    }
    void show()
    {
        cout << "Item : " <<  item << endl;
        cout << "cost : " << cost << endl;
        cout << "on hand : " << on_hand << endl;

    }
};

int main()
{
    base ob("wrench",4.95,4);

    ob.show();

    return 0;
}

