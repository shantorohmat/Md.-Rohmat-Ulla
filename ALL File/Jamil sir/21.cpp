#include <iostream>
#include <cstdlib>
using namespace std;

class Mark
{
    int roll,marks;
    string name;
public :
    Mark(string name,int roll)
    {
        this->name = name;
        this->roll = roll;
        //this->marks = marks;
    }
     void show()
    {
        int rand();
        cout << "Name : " << name << rand()%10<<  endl;
        cout << "Roll : " << roll << endl;

    }

};

class Physics:public Mark
{
    int mark;
public:
    Physics(string name,int n,int roll):Mark(name,roll)
    {
        mark = n;
    }
    int show_geta()
    {
        return mark;
    }

};
class Chemistry:public Mark
{
    int mark;
public:
    Chemistry(string name,int n,int roll):Mark(name,roll)
    {
        mark = n;
    }
    int show_getb()
    {
        return mark;
    }

};
class Mathematics:public Mark
{
    int mark;
public:
    Mathematics(string name,int n,int roll):Mark(name,roll)
    {
        mark = n;
    }
    int show_getc()
    {
        return mark;
    }

};
int main()
{
    cout << "Number of students : ";
    int n;
    cin >> n;
    int rand();
    //string rand();

    for(int i = 1,j = 50;i <= n;i++,j = j+4)
    {
        //Mark n("name",i);
        Physics p("name",(j+(rand()%10)),i);
        Mathematics M("name",(j+(rand()%10)),i);
        Chemistry C("name",(j+(rand()%10)),i);

        p.show();
        cout << "Physics : " << p.show_geta() << endl;
        cout <<"Chemistry : " << C.show_getb() << endl;
        cout << "Mathematic : " << M.show_getc() << endl;



        int  sum = p.show_geta() + C.show_getb() + M.show_getc();

        double avg = sum / 3;

        cout << "Average : " << avg << endl;

        cout << endl;


    }

}
