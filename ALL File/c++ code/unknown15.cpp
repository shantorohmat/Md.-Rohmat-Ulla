#include<iostream>
using namespace std;
class student{
int a;
public:
    student(int x) { a = x; }
    int get_a()  { return a; }
};
int main()
{
    student sp[4][2] = {6,8,10,45,56,10,56,11};
    int i ;
    for(i = 0; i < 4;i++)
    {
        cout << sp[i][0].get_a() << '\t';
        cout << sp[i][1].get_a() << endl;

    }
    cout << endl;
    return 0;
}
