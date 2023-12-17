 #include<iostream>
using namespace std;
class student
{
    string  n;
public:
    student(string x)
    {
        n = x;
        cout << "const of " << n << endl;
    }
    ~student()
    {
        cout << "dest of " << n << endl;
    }
};

int main()
{
    student sp("rohmat");
    return 0;
}
