#include <bits/stdc++.h>
#include <cstring>
using namespace std;

class base
{
     char str[80];

 public:

    base(char *s) {strcpy(str,s); }
    char *get() {return str; }

};

class derived : public base
{
    int len;

public:

    derived(char *s) : base(s)
    {
        len = strlen(s);
    }
    int getlen(){ return len; }
    void show() { cout << get() << endl; }

};
int main()
{
    derived ob("Hello");

    ob.show();
    cout << ob.getlen() << endl;

    return 0;


}
