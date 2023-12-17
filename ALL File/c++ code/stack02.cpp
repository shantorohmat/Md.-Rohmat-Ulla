#include<iostream>
using namespace std;
#define size 10
class stack
{
    char stack[size];
    int tos;

public :

    void init()
    {
        tos = 0;
    }

    void push(char ch)
    {
        if(tos == size)
        {
            cout << "Stack is full"<<endl;
            return ;
        }
        else
        {
            stack[tos] = ch;
            tos++;
        }

    }

    char pop()
    {
        if(tos == 0)
        {
            cout << "Stack is empty"<<endl;
            return 0;
        }
        else{
            tos--;
            return stack[tos];
        }
    }

};
int main()
{
    stack s1,s2;
    int i;
    s1.init();
    s2.init();

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(i = 0; i < 5;i++) cout << "pop s1 : " << s1.pop() << endl;
    for(i = 0; i < 3; i++) cout << "pop s2 : "<< s2.pop() << endl;

    return 0;

}
