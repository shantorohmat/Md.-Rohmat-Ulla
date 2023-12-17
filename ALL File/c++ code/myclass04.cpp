#include<iostream>
using namespace std;

class student
{

public:
     int id;
    double cgpa;
    int age;
    string name;

     student()
    {
        id = 0.0;
        cgpa  = 0.0;
    }

    student(int x,double y)
    {
        id = x;
        cgpa  = y;
    }
};
int main()
{
    student sp(01,3.88),bp(02,3.88);

    cout << sp.id << " " << sp.cgpa << endl;
    cout << bp.id << " " << bp.cgpa << endl;



    return 0;
}
