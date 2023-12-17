#include<iostream>
using namespace std;
class student
{
public:
    int age;
    double cgpa;
};
int main()
{
    student sp,bp;

    sp.age = 34;
    sp.cgpa = 4.00258;

    bp.age = 22;
    bp.cgpa = 3.8659848;

    cout << sp.age ;
    cout.setprecition(2) ;
    cout << sp.cgpa << endl;

    cout << bp.age << " " << bp.cgpa << endl;

    return 0;
}
