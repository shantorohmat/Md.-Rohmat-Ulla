#include<iostream>

using namespace std;

class student
{
    int id;
    double cgpa;
    string university;
public:
    student(int y,double cg)
    {
        id = y;
        cgpa = cg;
        university = "IIUC";


    }
    /*void setID(int x)
    {
        id = x;
;

    }*/
    int showID()
    {
        return id;
    }
   /*void setCG(double x)
    {
        cgpa = x;

    }*/
    double showCG()
    {
        return cgpa;
    }

    string showVER()
    {
        return university;
    }

};

int main()
{


    student sp(1,3.88);
    student bp(2,3.88);

    cout << bp.showID() << " " <<bp.showCG() << " " << bp.showVER() << endl;

    cout << sp.showID() << " " <<sp.showCG() << " " << sp.showVER()  << endl;

    return 0;


}
