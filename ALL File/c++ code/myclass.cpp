#include<iostream>
using namespace std;

class student
{
public :
    int id;
    int age;
    double cgpa;
    string name;

    void Info()
    {
        cout << "Name : " << name << endl;

        cout << "Age : " << age << endl;

         cout << "ID : " << id << endl;

        cout << "Cgpa : " << cgpa << endl;

        cout << endl;


    }
};



int main()

{
    student Shanto ,Rohmat;

    Shanto.id = 01;
    Shanto.cgpa = 3.88;
    Shanto.name = "Shanto";
    Shanto.age = 22;

   Rohmat.id = 02;
   Rohmat.cgpa = 3.88;
   Rohmat.name = "Rohamt";
   Rohmat.age = 22;

   Shanto.Info();
   Rohmat.Info();

    return 0;

}
