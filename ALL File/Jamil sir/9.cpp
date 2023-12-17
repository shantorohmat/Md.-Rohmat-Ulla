#include <iostream>
using namespace std;
class Programming
{
public:

    Programming()
    {
        cout << "I love programming " << endl;
    }
    Programming(string d)
    {
        cout << "I love " << d << endl;
    }

};
int main()
{
    Programming s,p("cpp");
}
