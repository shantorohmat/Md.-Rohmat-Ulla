#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

#define size 255

class strtype
{
    char *p;
    int len;
public:
    strtype()
    {
        p = (char *) malloc(size);
        if(!p){
            cout << "Allocation error" << endl;
            exit(1);
        }
        *p = '\0';
        len = 0;
    }
    ~strtype()
    {
        cout << "freeing p" << endl;
        free(p);
    }
    void set(char *ptr)
    {
        if(strlen(p) >= size)
        {
            cout << "string too big" << endl;
            return;
        }
        strcpy(p,ptr);
        len = strlen(p);
    }
    void show()
              {
                  cout << p << "- length : " << len << endl;
              }
};
int main()
{
    strtype s1,s2;

    s1.set("This is a test.");
    s2.set("I like c++ ");

    s1.show();
    s2.show();
    return 0;
}
