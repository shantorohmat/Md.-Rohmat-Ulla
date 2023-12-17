#include <iostream>
using namespace std;
#define size 255
class stack
{
    char stck[size];
    int tos;


public :

    stack();

    ~stack();

    void push(char ch);

    char pop();

};

stack :: stack()
{

    cout << " constructor..........." << endl;

    tos = 0;

}

stack :: ~stack()
{
    cout  << "destructor....." << endl;
}

void stack :: push(char ch)
{
    if(tos == size)
    {
        cout << " stack is full. " << endl;
        return ;
    }
    stck[tos] = ch;
    tos++;
}

char stack :: pop()
{
    if(tos == 0)
    {
        cout  << " stack is empty " << endl;

        return 0;
    }
    tos--;
    return stck[tos];
}

int main()
{
    stack sp,op;

    sp.push('a');
    sp.push('b');
    sp.push('c');
    sp.push('d');

    op = sp;

    for(int i = 0;i < 4;i++)
    {
        cout << sp.pop() << endl ;
    }
    for(int i = 0;i < 4;i++)
    {
        cout << op.pop() << endl;;
    }

    return 0;
}







