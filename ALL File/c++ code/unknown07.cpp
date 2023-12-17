#include<iostream>
using namespace std;
#define size 10
class stack
{
    char stck[size];
    int tos;

public:
    void init()
    {
        tos = 0;
    }
    void push(char x)
    {
        if(tos == size)
        {
            cout << "stck is full." ;
            return ;
        }
        stck[tos] = x;
        tos++;
    }
    char  pop()
    {
        if(tos == 0)
        {
            cout << "stck is empty"  << endl;
            return 0;
        }
         tos--;
        return stck[tos];

    }

};
int main()
{
    stack sp;
    sp.init();
    sp.push('a');
    sp.push('b');
    sp.push('c');
    for(int i = 0;i < 4;i++)
    {
    cout << sp.pop()<< endl;
    }




    return 0;
}
