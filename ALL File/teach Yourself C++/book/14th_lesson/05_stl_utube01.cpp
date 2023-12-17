#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
    //int ar[5] = { 4,5,6,7,8};

    list <int> l(4,4);

    list<int> :: iterator it;

    for(it = l.begin();it != l.end();it++)
    {
        cout << *it << "\t";
    }
}
