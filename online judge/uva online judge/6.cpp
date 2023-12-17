#include <iostream>
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
    }
     void show()
    {

        cout << "Name : " << name <<  endl;
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
    int show_get_x()
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
    int show_get_y()
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
    int show_get_z()
    {
        return mark;
    }

};
int main()
{
    cout << "No of students : ";
    int x;
    cin >> x;


    for(int i = 1,j = 65;i <= x;i++,j = j+4)
    {
        Physics p("name",j,i);
        Mathematics M("name",j,i);
        Chemistry C("name",j,i);

        p.show();
        cout << "Physics : " << p.show_get_x() << endl;
        cout <<"Chemistry : " << C.show_get_y() << endl;
        cout << "Mathematic : " << M.show_get_z() << endl;



        int  sum = p.show_get_x() + C.show_get_y() + M.show_get_z();

        double avarage = sum / 3;

        cout << "Average : " << avarage << endl;

        cout << endl;


    }

}
