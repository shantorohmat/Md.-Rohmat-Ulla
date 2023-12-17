#include<iostream>
using namespace std;

class stack{
int s1[100],size;
public :
    stack()
    {
        size = 0;
    }

    void push(int x)
    {
        s1[size] = x;
        size++;
    }
    void pop()
    {
        size--;
    }

    void print()
    {
        cout << "Stack element are : ";
        for(int i = 0; i < size;i++)
        {
            cout << s1[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    stack s1;

    s1.push(100);
    s1.push(200);
    s1.push(300);
    s1.pop();
    s1.print();
    s1.print();

    return 0;
}
