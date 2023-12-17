#include <iostream>
using namespace std;
class Mammals
{
public :
    void show_a()
    {
        cout << "I am mammal" << endl;
    }
};

class MarineAnimals
{
public :
    void show_b()
    {
        cout <<  "I am a marine animal" << endl;
    }
};

class BlueWhale: public  MarineAnimals,Mammals
{
public :
    void show_c()
    {
        cout <<  "I belong to both the categories: Mammals as well as Marine Animals" << endl;
    }
};
int main()
{
    Mammals *p;
    Mammals ob;
    p = &ob;
    p->show_a();

    cout << endl;



    MarineAnimals *q;
    MarineAnimals oc;
    q = &oc;
    q->show_b();
    cout << endl;
    cout << endl;



    BlueWhale *r;
    BlueWhale od;
    r = &od;
    r->show_c();


    q->show_b();
    p -> show_a();


}
