#include <bits/stdc++.h>
using namespace std;

int main()
{
    list <int> l;
    list <int> rev;

    for(int i = 0 ; i < 10;i++)
    {
        l.push_back(i);

    }

    list<int> :: iterator it;

    while(!l.empty())
    {
        it = l.begin();
        cout << *it << " ";
        l.pop_front();
        rev.push_front(*it);
    }
    cout << endl;

    list<int>:: iterator p;

    while(!rev.empty())
    {
        p = rev.begin();
        cout << *p << " ";
        rev.pop_front();
    }
    return 0;
}

