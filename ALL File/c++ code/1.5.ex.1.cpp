#include<iostream>
using namespace std;
class student
{
    int age;
public:
    void setInfo(int f)
    {
        age = f;

    }

    int showInfo()
    {
        return age;
    }
};
int main()
{
    student sp,bp;
    sp.setInfo(34);
    bp.setInfo(22);

    cout << sp.showInfo() << endl;

    cout << bp.showInfo() << endl;

}
