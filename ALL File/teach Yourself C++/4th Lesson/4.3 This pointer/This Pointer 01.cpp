#include <bits/stdc++.h>
#include <cstring>
using namespace std;

class shanto
{
    char s[80];

    double cost;

    int on_hand;

public:

    shanto (char *i,double c,int o)
    {
        strcpy(s,i);
        cost = c;
        on_hand = o;
    }

    void show()
    {
        cout << "Item : " << s <<endl;

        cout << " Cost : " << cost << endl;

        cout << " On_hand : " << on_hand << endl;
    }

};

int main()
{
    shanto ob("wrench",4.95,4);

    ob.show();

    return 0;
}
