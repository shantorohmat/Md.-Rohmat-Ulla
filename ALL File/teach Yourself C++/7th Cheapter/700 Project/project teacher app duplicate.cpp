#include<iostream>
using namespace std;
class Course{
    int code;
    string name;
    int crHr;
public:
    Course() {
        name = ""; code = 0; crHr = 0;
    }
    Course(string n, int cc, int ch)
    {
        code = cc;
        name = n;
        crHr = ch;
    }
    string getName(){ return name; }
    int getCreditHour() { return crHr; }
    //friend void Teacher :: add_course(Course c);
};
class Teacher{
    string name , desg;
    int id;
    Course courseList[10];
    int maxCredit;
    int curCr;
    int totalCoursesTaken;
public:
    Teacher(string name, string desg, int id)
    {
        totalCoursesTaken = curCr = 0;
        maxCredit = 5;
        this -> name = name;
        this -> desg = desg;
        this -> id = id;
    }
    void add_course(Course c){
        if((curCr + c.getCreditHour()) <= maxCredit){
            courseList[totalCoursesTaken] = c;
            totalCoursesTaken++;
            curCr += c.getCreditHour();
            cout << c.getName() << " successfully added." << endl;
        }
        else{
            cout << "Adding " << c.getName() << " not Possible. Cur Credit : " << curCr << endl;
        }
    }
    void show_courses()
    {
        cout << endl << "Name : " << name << endl;
        cout << "Courses taken : \n";
        for(int i = 0; i < totalCoursesTaken; i++){
            cout << "   Course Name : " << courseList[i].getName() << endl;
            cout << "   Credit Hour : " << courseList[i].getCreditHour() << endl;
        }
        cout << "Max Credit : " << maxCredit << endl;
        cout << "Credit taken : " << curCr << endl;
        cout << endl;
    }


};

int main()
{
    //Teacher aj;
    Teacher aj("Abdul Jalil", "Lecturer", 123);
    Teacher dj("Darun jalil", "Professor", 321);
    Course ur("English", 101, 1);
    Course cpp("C++", 102, 3);
    Course mth("Math", 103, 2);

    aj.add_course(ur);
    aj.add_course(cpp);
    aj.add_course(mth);

    aj.show_courses();

    dj.add_course(cpp);
    dj.add_course(mth);

    dj.show_courses();


    return 0;
}

