#include <iostream>
using namespace std;
#define size 5
class stack
{
    char stck[size];
    int tos;


public :

    stack();

    void push(char ch);

    char pop();

};

stack :: stack()
{

    tos = 0;

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
        cout  << " stac is empty " << endl;

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

    op.push('s');
    op.push('h');
    op.push('n');
    op.push('t');
    op.push('o');

    for(int i = 0;i < 4;i++)
    {
        cout << sp.pop() << endl ;
    }
    for(int i = 0;i < 5;i++)
    {
        cout << op.pop() << endl;;
    }
}






