#include<iostream>
using namespace std;
//class Teacher;
class Course
{
    int course_code;
    string course_name;
    int credit_hour;
public:
    Course() {
        course_name = ""; course_code = 0; credit_hour = 0;
    }

    Course(string course_name,int  course_code,int credit_houre)
    {
        this -> course_code = course_code;
        this -> course_name = course_name;
        this -> credit_hour = credit_hour;
    }
    string get_Course_Name() { return course_name; }
    //int get_Course_Code() { return course_code; }
    int get_Credit_Hour() { return credit_hour; }
};

class Teacher
{
    string name;
    string deg;
    int id;
    Course course_list[10];
    int max_credit;
    int current_credit;
    int total_course_taken;
public:
    Teacher(string name,string deg,int id)
    {
        max_credit = 5;
        current_credit = 0;
        total_course_taken = 0;
        this -> name = name;
        this -> deg = deg;
        this -> id = id;
    }
    void add_course(Course c)
    {
        if((c.get_Credit_Hour() + current_credit) <= max_credit){
        course_list[total_course_taken] = c;
        total_course_taken++;
        current_credit = c.get_Credit_Hour() + current_credit;
        cout << c.get_Course_Name() << "is successfully add." << endl;
        }
        else{
            cout << c.get_Course_Name() << " isn't possible" << endl;
        }
    }
    void show_courses()
    {
        cout << "Name :" << name<< endl << deg << endl << id << endl;

        for(int i= 0; i < total_course_taken;i++)
        {
            cout <<  "Course Name : "  << course_list[i].get_Course_Name() << endl;
            cout << "Credit Hour : " << course_list[i].get_Credit_Hour() << endl;
        }

        cout << "Max Credit :" << max_credit <<endl;
        cout << "credit Hour : " <<  current_credit << endl;

    }

};

int main()
{
    Teacher sp("Jamil","professor",1);
    Course ured("ured",1121,1);
    Course cse("c++",1201,3);

    sp.add_course(ured);
    sp.add_course(cse);
    sp.show_courses();

    return 0;

}
