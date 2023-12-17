#include <iostream>
using namespace std;
class Student
{
    string name,address;

    int age;

public :
    Student(string name,int age )
    {
        this -> name = name;

        this -> age = age;



    }
    Student()
    {
        this -> name = "Unknown";
        this -> address = "not available" ;
        this -> age = 0;

    }
    Student(string name,int age,string address )
    {
        this -> name = name;
        this -> age = age;
        this -> address = address;


    }
    void show()
    {
        cout << "Name : " << name << endl;
        cout << "Address : "<< address<< endl;
        cout<< "Age : " << age << endl;

        cout << endl;
    }
};
int main()
{
    Student ob[10] = {Student("name1",20),Student("name2",20),Student(),Student(),Student("name5",20,"address5"),Student("name6",20,"address6"),Student("name7",20,"address7"),Student("name8",20,"address8"),Student("name9",20,"address9"),Student("name10",20,"address10")};


    for(int i = 0;i < 10;i++)
        ob[i].show();
}
