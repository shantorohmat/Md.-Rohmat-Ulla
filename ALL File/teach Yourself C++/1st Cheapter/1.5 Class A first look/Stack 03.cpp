#include <iostream>
using namespace std;

#define size 10

class stack
{
    char stack[size];
    int tos;

public :

    void push(char ch);

    char pop();

    void init();

};

void stack :: init()
{
    tos = 0;
}

void stack :: push(char ch)
{
    if(tos == size)
    {
        cout << "Stack is full."<< endl;
        return ;
    }
    cout << "push : " << tos << " stack : " <<  stack[tos]  << endl;
    stack[tos] = ch;
    tos++;
}

char stack ::  pop()
{
    if(tos == 0)
    {
        cout << "Stack is empty" << endl;

    }
    tos--;
    cout << " pop : "<< tos << " : " ;
    return stack[tos];
}

int main()
{
    stack s;

    s.init();

    s.push('a');
    s.push('b');
    s.push('c');

    for(int i = 0;i < 4;i++)
        cout << "pop s : " <<s.pop() << endl;

    return 0;

}
