#include <iostream>
#include <cstring>
using namespace std;

class base
{
    char item[20];
    double cost;
    int on_hand;
public:
    base(char *i,double c,int on )
    {
        strcpy(item,i);
        cost = c;
        on_hand = on;
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
