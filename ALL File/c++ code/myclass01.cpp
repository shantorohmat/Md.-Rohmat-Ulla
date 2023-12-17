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
        cout << "Name : ";
        cin >> name ;
        cout << "Age : ";
        cin  >> age ;
        cout << "Cgpa : ";
        cin >> cgpa;
        cout << "ID : ";
        cin >> id ;

        cout << endl;
        cout << endl;
    }
    void showInfo()
{

        cout << "Name : ";
        cout << name << endl;
        cout << "Age : ";
        cout  << age << endl;
        cout << "Cgpa : ";
        cout << cgpa << endl;
        cout << "ID : ";
        cout << id << endl;

       cout << endl;
       cout << endl;

    }
};

int main()

{
    student Shanto,Rohmat;

    Shanto.Info();
    Rohmat.Info();

    Shanto.showInfo();
    Rohmat.showInfo();





}
