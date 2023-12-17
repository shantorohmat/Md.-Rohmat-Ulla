#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;

int main()
{
    list <char> lst;

    for(int i = 0;i < 10;i++)
    {
        lst.push_back('A' + (rand() % 26));
    }
    cout << "Original Contents : ";

    list <char> :: iterator p = lst.begin();

    while(p != lst.end())
    {
        cout << *p << "\t";
        p++;
    }
    cout << endl << endl;

    lst.sort();

    cout << "sorted contents : ";

    p = lst.begin();

    while(p != lst.end())
    {
        cout << *p << "\t";
        p++;
    }
    return 0;

}
