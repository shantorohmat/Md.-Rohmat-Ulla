#include <iostream>
#include <cstring>
using namespace std;

class shanto
{
    char s[80];

public:

    void show() { cout << s << endl; }

    void set(char* str) { strcpy(s,str); }

};

shanto input()
{
    char s[80];

    shanto str;

    cout << "Enter a string : " <<    endl;

    cin >> s;

    str.set(s);

    return str;
}

int main()
{
    shanto ob;

    ob = input();

    ob.show();

    return 0;
}





