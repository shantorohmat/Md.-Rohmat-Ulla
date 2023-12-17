#include <iostream>
using namespace std;

void swap(int &i,int &j)
{
    int temp;

    temp = i;
    i = j;
    j = temp;
}
int main()
{
    int i,j;

    i = 10,j = 5;

    cout << "i : " << i << endl;
    cout << "j : " << j << endl;

    swap(i,j);

    cout << "After swap : " << endl;
    cout << "i : " << i << endl;
    cout << "j : " << j << endl;

    return 0;
}
