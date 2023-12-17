#include<bits/stdc++.h>
using namespace std;

class student
{
    int id;
    string name;
public:

    student(int x,string y)
    {
        name = y;
        id = x;
    }
    string get_name() { return name; }
    int get_id() { return id; }

};
int main()
{
    student sp(11,"Shanto");

   cout << sp.get_name() << endl;
   cout << sp.get_id() << endl;
}

