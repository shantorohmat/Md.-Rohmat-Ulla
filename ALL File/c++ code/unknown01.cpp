#include<iostream>
using namespace std;
class product
{
    string name;
    int quntity;
    int price;
public:
    product(string name,int quntity,int price)
    {
        this -> name = name;
        this -> quntity = quntity;
        this -> price = price;

        cout << quntity <<" "<< name << "'s" << " in shop" << endl;
    }
    void purchase(int x)
    {
        quntity = quntity + x;

        cout << x << " " << name << " 's purchased" << endl;
    }
    void sell (int x)
    {
            if(quntity < x)
            {
                cout << "attention  :" << x << " " <<  name << "'s  can not be selled  " << quntity << " " << name << "'s in cart " <<  endl;
                return;
            }
            quntity = quntity - x;
            cout << x <<  name << " 's selled" << endl;
    }
    void show()
    {
        cout << quntity << name << " has " <<  " in item" << endl;
    }
};
int main()
{
    product sp(" soap" ,2,60);
    sp.purchase(5);
    sp.sell(5);
    sp.show();
}
