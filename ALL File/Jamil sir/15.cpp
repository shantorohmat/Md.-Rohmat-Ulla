#include <iostream>
using namespace std;

class Bank
{
    int n  = 0;
public:


    getbalence()
    {
        return n;
    }
};
class BankA : public Bank
{
    int n ;

public:

    BankA(int a)
    {
        n = a;
    }
    getbalence()
    {
        return n;
    }
};
class BankB : public Bank
{
    int n ;
public:
    BankB(int a)
    {
        n = a;
    }
    getbalence()
    {
        return n;
    }
};
class BankC : public Bank
{
    int n ;
public:
    BankC(int a)
    {
        n = a;
    }
    getbalence()
    {
        return n;
    }
};
int main()
{
    BankA ob(1000);
    cout << ob.getbalence() << endl;
    BankB oc(1500);
    cout << oc.getbalence() << endl;
    BankC od(2000);
    cout << od.getbalence() << endl;

}
