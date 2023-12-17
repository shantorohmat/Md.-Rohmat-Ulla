#include <iostream>
#include <list>
#include <iterator>
using namespace std;
int main()
{
    list <int> l;

    list <int> :: iterator it;

    l.push_back(7);
    l.push_back(8);
    l.push_front(6);
    l.push_front(5);

    l.reverse();

    //l.clear();

   for(it = l.begin(); it != l.end();it++)
    {
        cout << *it << "\t";
    }

    cout << endl <<endl;

    cout <<l.size() << endl << endl;

    //cout << l.empty() << endl << endl;
}
