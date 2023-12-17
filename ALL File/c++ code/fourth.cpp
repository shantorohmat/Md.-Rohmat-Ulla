#include<iostream>
using namespace std;

int main()
{
    char s1;

    cout << "Enter keys,  x to stop . \n";
    do {
        cout << ": ";
        cin >> s1;

    }while(s1 != 'x');

    return 0;
}
