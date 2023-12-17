#include <iostream>
using namespace std;

class letters
{
    char ch;
public:
    letters(char n) { ch = n; }
    void show() { cout << ch << '\t';  }
};

int main()
{
    letters ob[10] = { 'a','b','c','d','e','f','g','h','i','j' };

    for(int i = 0;i < 10;i++)
    {
        ob[i].show() ;

    }

    cout << endl;

    return 0;
}
